#include "binary.h"

void bit_set_reset(unsigned char *data, int bit_nbr, int mode)
{
    if (mode == 1 && BITGET(*data, bit_nbr) != 1)
        BITSET(*data, bit_nbr);
    else if (BITGET(*data, bit_nbr) != 0)
        BITRESET(*data, bit_nbr);
}