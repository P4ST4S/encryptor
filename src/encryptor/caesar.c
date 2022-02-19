/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:55:33
 * @ Description:
 */

#include "caesar.h"

void std_caesar(char *data, size_t len, char *key)
{
    size_t count;

    count = 0;
    while (data[count] != '\0' && count < len)
    {
        data[count] += key[count % std_strlen(key)];
        count++;
    }
}