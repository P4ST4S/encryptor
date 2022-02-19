/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:54:39
 * @ Description:
 */

#include "memset.h"

void std_memset(void *pointer, int value, size_t count)
{
    size_t loop;
    char *chain;

    chain = pointer;
    loop = 0;
    while (loop != count)
    {
        chain[loop] = value;
        loop++;
    }
}