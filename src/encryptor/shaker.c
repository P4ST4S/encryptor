/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:55:42
 * @ Description:
 */

#include "shaker.h"

static void cipher_true(char *cnt, char *key, size_t len_cnt, size_t len)
{
    char tmp;
    size_t index;
    size_t count;

    count = 0;
    index = 0;
    while (cnt[count] != '\0' && count < len)
    {
        index = (key[count % std_strlen(key)] % len_cnt) + count;
        if (index >= len_cnt)
            index = index - len_cnt;
        tmp = cnt[index];
        cnt[index] = cnt[count];
        cnt[count] = tmp;
        count++;
    }
}

static void cipher_false(char *cnt, char *key, size_t len_cnt, size_t len)
{
    char tmp;
    size_t index;
    int start;

    index = 0;
    start = (len_cnt % std_strlen(key)) - 1;
    while (len != 0)
    {
        if (start == -1)
            start = std_strlen(key) - 1;
        index = (len - 1) + (key[start] % len_cnt);
        if (index >= len_cnt)
            index = index - len_cnt;
        tmp = cnt[len - 1];
        cnt[len - 1] = cnt[index];
        cnt[index] = tmp;
        start--;
        len--;
    }
}

void std_shaker(char *cnt, size_t len, char *key, bool cipher)
{
    size_t len_cnt;

    len_cnt = std_strnlen(cnt, len);
    if (cipher == true)
        cipher_true(cnt, key, len_cnt, len);
    else
        cipher_false(cnt, key, len_cnt, len);
}