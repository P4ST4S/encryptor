#include "hash.h"

unsigned int std_hash(char *data, size_t len)
{
    unsigned int hash = 5381;
    size_t c;

    while (data[c] != '\0' && c < len)
    {
        c = data[c];
        hash = ((hash << 5) + hash) + c;
    }
    return (hash);
}