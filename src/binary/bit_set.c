#include "binary.h"

void bit_set(unsigned char *data, int bit_nbr)
{
    *data = (1 << bit_nbr) | (*data);
}