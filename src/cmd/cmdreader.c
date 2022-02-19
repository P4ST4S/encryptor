/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:56:07
 * @ Description:
 */

#include "cmdreader.h"

static void free_char(char *key, char *encryptor, char *dest, char *cnt, char *src, char *p, char *cipherchar)
{
    free(src);
    src = NULL;
    free(dest);
    dest = NULL;
    free(encryptor);
    encryptor = NULL;
    free(key);
    key = NULL;
    free(cnt);
    cnt = NULL;
    free(p);
    p = NULL;
    free(cipherchar);
    cipherchar = NULL;
}

static void cmd_execute(char *key, char *encryptor, char *dest, char *src, int option_p, int option_d, int option_s, int option_c, bool cipher)
{
    char *cnt = NULL, *p = NULL, *cipherchar = NULL;
    int end = 0, fd_dest = 0, fd_src = 0, attempt = 0;
    size_t len, ok = 1, option_len;

    if (encryptor == NULL)
    {
        encryptor = malloc(24);
        write(1, "Enter an encryptor : ", 21);
        end = read(0, encryptor, 24);
        encryptor[end - 1] = '\0';
    }
    if (src != NULL)
    {
        fd_src = src_cmd(src);
        while (fd_src == -1 && attempt != 3)
        {
            write(1, "Please enter a correct source file : ", 37);
            src = std_read_realloc(0, &option_len);
            fd_src = src_cmd(src);
            attempt++;
        }
        if (fd_src == -1)
        {
            write(1, "Too much attempt, failed opening\n", 33);
            return;
        }
        cnt = std_read_file(fd_src, &len);
        close(fd_src);
    }
    if (option_s == 1 && src == NULL)
    {
        write(1, "Enter source file : ", 20);
        src = std_read_realloc(0, &option_len);
        fd_src = src_cmd(src);
        while (fd_src == -1 && attempt != 3)
        {
            write(1, "Please enter a correct source file : ", 37);
            src = std_read_realloc(0, &option_len);
            fd_src = src_cmd(src);
        }
        if (fd_src == -1)
        {
            write(1, "Too much attempt, failed opening\n", 33);
            return;
        }
        cnt = std_read_file(fd_src, &len);
        close(fd_src);
    }
    if (src == NULL && option_s != 1)
    {
        write(1, "Enter the word / sentence for encryption : ", 43);
        cnt = std_read_realloc(0, &len);
    }
    if (option_c == 0 && std_strcmp(encryptor, "XOR") != 0 && std_strcmp(encryptor, "xor") != 0)
    {
        while (option_c != 1)
        {
            write(1, "Cipher [true / false] : ", 24);
            cipherchar = std_read_realloc(0, &option_len);
            if (std_strcmp(cipherchar, "true") == 0 || std_strcmp(cipherchar, "TRUE") == 0)
            {
                option_c = 1;
                cipher = true;
            }
            else if (std_strcmp(cipherchar, "false") == 0 || std_strcmp(cipherchar, "FALSE") == 0)
            {
                option_c = 1;
                cipher = false;
            }
            else
                write(1, "ERROR CIPHER\n", 13);
        }
    }
    if (option_d == 1)
    {
        write(1, "Enter destination file : ", 25);
        attempt = 0;
        dest = std_read_realloc(0, &option_len);
        fd_dest = destination_cmd(dest);
        while (fd_dest == -1 && attempt != 3)
        {
            write(1, "Please enter a correct destination file : ", 42);
            dest = std_read_realloc(0, &option_len);
            fd_dest = destination_cmd(dest);
        }
        if (fd_src == -1)
        {
            write(1, "Too much attempt, failed opening\n", 33);
            return;
        }
    }
    if (key == NULL)
    {
        key = malloc(64);
        write(1, "Enter a key : ", 14);
        end = read(0, key, 64);
        key[end] = '\0';
        // write(1, "\n", 1);
    }
    encrypt_cmd(cnt, len, key, cipher, encryptor);
    if (option_p == 0 && dest != NULL)
        ok = 1;
    if (option_p == 1 && dest != NULL)
    {
        write(1, cnt, std_strlen(cnt));
        write(1, "\n", 1);
        write(1, "Do you want to save this sentence in the destination file ? [OK / NO] : ", 72);
        p = std_read_realloc(0, &ok);
        if (std_strcmp(p, "OK") == 0 || std_strcmp(p, "ok") == 0)
        {
            ok = 1;
            write(1, "Encryption saved !\n", 20);
        }
        else
        {
            ok = 0;
            write(1, "Encryption not saved !\n", 23);
        }
    }
    if (dest != NULL && ok == 1)
    {
        if (option_d != 1)
            fd_dest = destination_cmd(dest);
        len = 0;
        std_read_file(fd_dest, &len);
        std_write_file(fd_dest, cnt, &len);
        close(fd_dest);
    }
    if (option_p == 0)
    {
        write(1, cnt, std_strlen(cnt));
        write(1, "\n", 1);
    }
    free_char(key, encryptor, dest, cnt, src, p, cipherchar);
}

void cmd_reader(char **argv)
{
    char *key = NULL, *encryptor = NULL, *dest = NULL, *src = NULL;
    bool cipher = true;
    int option_p = 0, option_d = 0, option_s = 0, option_c = 0, count = 0;

    while (argv[count] != NULL)
    {
        if (std_strcmp(argv[count], "-d") == 0)
        {
            count++;
            if (argv[count + 1] == NULL || argv[count][0] == '-')
                option_d = 1;
            else
            {
                dest = malloc(std_strlen(argv[count]) + 1);
                if (dest)
                    std_strcpy(dest, argv[count]);
            }
        }
        else if (std_strcmp(argv[count], "-e") == 0)
        {
            if (argv[count + 1] == NULL || argv[count + 1][0] == '-')
                count++;
            else
            {
                count++;
                encryptor = malloc(std_strlen(argv[count]) + 1);
                if (encryptor)
                    std_strcpy(encryptor, argv[count]);
            }
        }
        else if (std_strcmp(argv[count], "-s") == 0)
        {
            count++;
            if (argv[count + 1] == NULL || argv[count][0] == '-')
                option_s = 1;
            else
            {
                src = malloc(std_strlen(argv[count]) + 1);
                if (src)
                    std_strcpy(src, argv[count]);
            }
        }
        else if (std_strcmp(argv[count], "-k") == 0)
        {
            count++;
            if (argv[count + 1] == NULL || argv[count][0] == '-')
                key = NULL;
            else
            {
                key = malloc(std_strlen(argv[count]) + 1);
                if (key)
                    std_strcpy(key, argv[count]);
            }
        }
        else if (std_strcmp(argv[count], "-c") == 0)
        {
            if (argv[count + 1] == NULL || argv[count][0] == '-')
                option_c = 0;
            else
            {
                option_c = 1;
                count++;
                if (std_strcmp(argv[count], "true"))
                    cipher = true;
                else
                    cipher = false;
            }
        }
        else if (std_strcmp(argv[count], "-p") == 0)
            option_p = 1;
        count++;
    }
    cmd_execute(key, encryptor, dest, src, option_p, option_d, option_s, option_c, cipher);
}