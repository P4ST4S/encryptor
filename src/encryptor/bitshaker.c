/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:55:25
 * @ Description:
 */

#include "bitshaker.h"

void std_bitshake(char *cnt, size_t len, char *key, bool cipher)
{
    size_t bit, idx;
    int count;
    bool bitA, bitB;

    if (cipher)
    {
        count = 0;
        while (++count < (int)len)
        {
            bit = key[count % std_strlen(key)] & 0x7;
            idx = (key[count % std_strlen(key)] >> 3) & 0x1F;

            bitA = (cnt[count] >> bit) & 0x1;
            bitB = (cnt[(count + idx) % len] >> bit) & 0x1;

            if (bitB)
                cnt[count] |= 1 << bit;
            else
                cnt[count] &= ~(1 << bit);

            if (bitA)
                cnt[(count + idx) % len] |= 1 << bit;
            else
                cnt[(count + idx) % len] &= ~(1 << bit);
        }
    }
    else
    {
        count = len - 1;
        while (--count >= 0)
        {
            bit = key[count % std_strlen(key)] & 0x7;
            idx = (key[count % std_strlen(key)] >> 3) & 0x1F;

            bitA = (cnt[count] >> bit) & 0x1;
            bitB = (cnt[(count + idx) % len] >> bit) & 0x1;

            if (bitB)
                cnt[count] |= 1 << bit;
            else
                cnt[count] &= ~(1 << bit);

            if (bitA)
                cnt[(count + idx) % len] |= 1 << bit;
            else
                cnt[(count + idx) % len] &= ~(1 << bit);
        }
    }
}
