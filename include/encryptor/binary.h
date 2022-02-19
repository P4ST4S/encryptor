/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:57:56
 * @ Description:
 */

#ifndef __BINARY_H__
#define __BINARY_H__

#include <stdlib.h>

void bit_set(char *data, int bit_nbr);

void bit_reset(char *data, int bit_nbr);

char bit_get(char *data, int bit_nbr);

void bit_rev(char *data, int bit_nbr);

void bit_set_reset(char *data, int bit_nbr, int mode);

void bit_count(char data, int *zeros, int *ones);

#endif /* __BINARY_H__ */