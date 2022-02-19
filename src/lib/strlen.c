/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:54:31
 * @ Description:
 */

#include "strlen.h"

size_t std_strlen(const char *str)
{
    int lenghtCaracter;

    lenghtCaracter = 0;
    while (str[lenghtCaracter] != '\0')
        lenghtCaracter++;
    return (lenghtCaracter);
}
