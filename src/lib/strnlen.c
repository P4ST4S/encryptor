/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Your name
 * @ Modified time: 2022-02-19 16:51:42
 * @ Description: Encryptor
 */

#include "strnlen.h"

size_t std_strnlen(const char *s,
                   size_t maxlen)
{
    size_t lenght;

    lenght = 0;
    while (lenght < maxlen && s[lenght] != '\0')
        lenght++;
    return (lenght);
}