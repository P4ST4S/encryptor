#include "strnlen.h"

size_t std_strnlen(const char *s,
                   size_t maxlen)
{
    size_t lenght;

    lenght = 0;
    while (lenght < maxlen && s[lenght] != '\0')
        lenght++;
    return (lenght);
}