#include "writefile.h"

void std_write_file(const int fd, const char *buf, size_t *len)
{
    if (fd == -1)
        return;
    while (*buf)
    {
        write(fd, (buf)++, 1);
        (*len)++;
    }
}