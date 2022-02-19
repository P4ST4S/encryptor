/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:54:34
 * @ Description:
 */

#include "strcpy.h"

char *std_strcpy(char *dest,
                 const char *src)
{
    int count;

    count = 0;
    while (src[count] != '\0')
    {
        dest[count] = src[count];
        count++;
    }
    dest[count] = '\0';
    return (dest);
}