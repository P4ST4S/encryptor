/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:54:43
 * @ Description:
 */

#include "atoi.h"

int std_atoi(const char *nptr)
{
    int result;
    int loop;

    result = 0;
    loop = 0;
    while (nptr[loop] != '\0')
    {
        result = result * 10 + nptr[loop] - '0';
        loop++;
    }
    if (result >= MAX_INT || result <= MIN_INT)
        return (errno = EINVAL);
    return (result);
}