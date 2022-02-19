/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:56:14
 * @ Description:
 */

#include "encryptcmd.h"
#include <stdio.h>

void encrypt_cmd(char *data, size_t len, char *key, bool cipher, char *encryptor)
{
    size_t opt = 0;

    while (1)
    {
        if (std_strcmp(encryptor, "XOR") == 0)
        {
            std_xor(data, len, key);
            return;
        }
        else if (std_strcmp(encryptor, "CAESAR") == 0)
        {
            std_caesar(data, len, key);
            return;
        }
        else if (std_strcmp(encryptor, "SHAKER") == 0)
        {
            std_shaker(data, len, key, cipher);
            return;
        }
        else if (std_strcmp(encryptor, "HASH") == 0)
        {
            std_strcpy(data, print_base10(std_hash(data, len)));
            return;
        }
        else if (std_strcmp(encryptor, "SWITCH") == 0)
        {
            std_switch(data, len, key, cipher);
            return;
        }
        else if (std_strcmp(encryptor, "BYTBIT") == 0)
        {
            std_bytbit(data, len);
            return;
        }
        else if (std_strcmp(encryptor, "BITSHAKE") == 0)
        {
            std_bitshake(data, len, key, cipher);
            return;
        }
        else
        {
            write(1, "Please specify an correct encryptor : ", 38);
            encryptor = std_read_realloc(0, &opt);
        }
    }
}