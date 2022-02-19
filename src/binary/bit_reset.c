/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:56:55
 * @ Description:
 */

#include "binary.h"

void bit_reset(char *data, int bit_nbr)
{
    *data = (*data) & (~(1 << bit_nbr));
}