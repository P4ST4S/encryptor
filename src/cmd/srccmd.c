#include "srccmd.h"

int src_cmd(char *file)
{
    int fd;

    fd = open(file, O_RDWR);
    if (fd == -1)
        write(1, "Error when opening file\n", 24);
    return (fd);
}