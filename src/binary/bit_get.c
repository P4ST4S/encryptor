#include "binary.h"

unsigned char bit_get(unsigned char data, int bit_nbr)
{
    return ((data >> bit_nbr) & 1);
}