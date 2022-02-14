#include "switch.h"

static void switch_true(char *cnt, size_t len, size_t len_cnt, const char *key)
{
    size_t count, count_bit, index;

    index = 0;
    count = 0;
    while (count < len && cnt[count] != '\0')
    {
        count_bit = 0;
        while (count_bit != 8)
        {
            BITREV(cnt[index], count_bit);
            count_bit++;
        }
        index = (key[count % std_strlen(key)] % len_cnt) + count;
        if (index >= len_cnt)
            index = index - len_cnt;
        count++;
    }
}

static void switch_false(char *cnt, size_t len, size_t len_cnt, const char *key)
{
    size_t count_bit, index;
    int start;

    index = 0;
    start = (len_cnt % std_strlen(key)) - 1;
    while (len != 0)
    {
        count_bit = 8;
        while (count_bit != 0)
        {
            BITREV(cnt[index], count_bit);
            count_bit--;
        }
        if (start == -1)
            start = std_strlen(key) - 1;
        index = (len - 1) + (key[start] % len_cnt);
        if (index >= len_cnt)
            index = index - len_cnt;
        len--;
        start--;
    }
}

void std_switch(char *cnt, size_t len, const char *key, bool cipher)
{
    if (cipher == true)
        switch_true(cnt, len, std_strnlen(cnt, len), key);
    else
        switch_false(cnt, len, std_strnlen(cnt, len), key);
}