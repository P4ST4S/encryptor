/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:55:11
 * @ Description:
 */

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