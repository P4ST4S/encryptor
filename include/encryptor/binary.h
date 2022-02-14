#ifndef __BINARY_H__
#define __BINARY_H__

#include <stdlib.h>

#define BITSET(data, bit_nbr) bit_set(&data, bit_nbr)
#define BITRESET(data, bit_nbr) bit_reset(&data, bit_nbr)
#define BITGET(data, bit_nbr) bit_get(data, bit_nbr)
#define BITREV(data, bit_nbr) bit_rev(&data, bit_nbr)
#define BITSETRESET(data, bit_nbr, mode) bit_set_reset(&data, bit_nbr, mode)
#define BITCOUNT(data, zeros, ones) bit_count(data, &zeros, &ones)

void bit_set(unsigned char *data, int bit_nbr);

void bit_reset(unsigned char *data, int bit_nbr);

unsigned char bit_get(unsigned char data, int bit_nbr);

void bit_rev(char *data, int bit_nbr);

void bit_set_reset(unsigned char *data, int bit_nbr, int mode);

void bit_count(unsigned char data, int *zeros, int *ones);

#endif /* __BINARY_H__ */