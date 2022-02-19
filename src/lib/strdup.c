/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:54:33
 * @ Description:
 */

#include "strdup.h"
#include "memcpy.h"
#include "strlen.h"

char *std_strdup(const char *s)
{
    size_t len;
    void *new;

    len = std_strlen(s) + 1;
    new = malloc(len);
    if (new == NULL)
        return NULL;
    std_memcpy(new, (void *)s, len);
    return ((char *)new);
}