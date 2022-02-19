/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:54:38
 * @ Description:
 */

#include "printbase10.h"

char *print_base10(int num)
{
    static char rpz[] = "0123456789";
    static char buf[50];
    char *ptr;

    ptr = &buf[49];
    *ptr = '\0';
    while (num != 0)
    {
        *--ptr = rpz[num % 10];
        num /= 10;
    }
    return (ptr);
}