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