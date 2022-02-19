/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:56:49
 * @ Description:
 */

#include "binary.h"

void bit_count(char data, int *zeros, int *ones)
{
    size_t count;

    count = 0;
    while (count < 8)
    {
        if (data & 1)
            (*ones)++;
        else
            (*zeros)++;
        data >>= 1;
    }
}