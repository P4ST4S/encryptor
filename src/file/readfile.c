#include "readfile.h"
#include <stdio.h>

char *std_read_file(const int fd, size_t *len)
{
    char *buf, *tmp;
    int reader;
    size_t len_char = 64, count = 0;

    if (fd == -1)
        return (NULL);
    buf = malloc(len_char);
    if (!buf)
        return (NULL);
    while (read(fd, &reader, 1) != 0)
    {
        buf[count++] = reader;
        if (count + 1 >= len_char)
        {
            tmp = std_realloc(buf, len_char * 2);
            if (!tmp)
            {
                buf[count] = 0;
                return (buf);
            }
            buf = tmp;
            len_char *= 2;
        }
    }
    *len = count;
    buf[count] = 0;
    if (count == 0 && reader == EOF)
    {
        free(buf);
        buf = NULL;
    }
    return (buf);
}