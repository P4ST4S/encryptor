#include "strcmp.h"

int std_strcmp(const char *str1, const char *str2)
{
    int i = 0;

    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
        i++;
    return (str2[i] - str1[i]);
}