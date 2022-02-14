#include "binary.h"

void bit_count(unsigned char data, int *zeros, int *ones)
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