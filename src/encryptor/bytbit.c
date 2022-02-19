/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:55:28
 * @ Description:
 */

#include "bytbit.h"

void std_bytbit(char *cnt, size_t len)
{
    int buffer[8];
    size_t count = 0, tarbyt, oribyt;

    while (count < len)
    {
        std_memset(&buffer[0], 0, sizeof(buffer));
        tarbyt = 0;
        while (++tarbyt < 8)
        {
            oribyt = 0;
            while (++oribyt < 8)
                buffer[tarbyt] |= (cnt[oribyt + count] & (1 << tarbyt));
        }
        std_memcpy(&cnt[count], &buffer[0], sizeof(buffer));
        count += 8;
    }
}