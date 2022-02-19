/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:56:52
 * @ Description:
 */

#include "binary.h"

char bit_get(char *data, int bit_nbr)
{
    return ((*data >> bit_nbr) & 1);
}