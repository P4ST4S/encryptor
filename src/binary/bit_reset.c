#include "binary.h"

void bit_reset(unsigned char *data, int bit_nbr)
{
    *data = (*data) & (~(1 << bit_nbr));
}