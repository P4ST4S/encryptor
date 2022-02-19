/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:55:45
 * @ Description:
 */

#include "switch.h"

void std_switch(char *cnt, size_t len, const char *key, bool cipher)
{
    int start;
    size_t i = 1, count = 0, idx = 0, len_cnt;
    bool bitPrecedent;

    if (len == 0)
        return;
    len_cnt = std_strnlen(cnt, len);
    bitPrecedent = bit_get(&cnt[idx], 0);
    if (cipher)
    {
        while (count < len && cnt[count] != '\0')
        {
            idx = (key[count % std_strlen(key)] % len_cnt) + count;
            if (idx >= len_cnt)
                idx = idx - len_cnt;
            while (++i < len * 8)
            {
                if (bitPrecedent != bit_get(&cnt[idx], i))
                {
                    bitPrecedent = bit_get(&cnt[idx], i);
                    bit_set(&cnt[idx], i);
                }
                else
                    bit_reset(&cnt[idx], i);
            }
            count++;
        }
    }
    else
    {
        start = (len_cnt % std_strlen(key)) - 1;
        while (count < len && cnt[count] != '\0')
        {
            if (start == -1)
                start = std_strlen(key) - 1;
            idx = (len - 1) + (key[start] % len_cnt);
            if (idx >= len_cnt)
                idx = idx - len_cnt;
            while (++i < len * 8)
            {
                if (bit_get(&cnt[idx], i) == 1)
                    bitPrecedent = !bitPrecedent;
                if (bitPrecedent)
                    bit_set(&cnt[idx], i);
                else
                    bit_reset(&cnt[idx], i);
            }
            count++;
        }
    }
}