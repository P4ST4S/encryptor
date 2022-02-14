#include "destinationcmd.h"

int destination_cmd(char *file)
{
    int fd;

    fd = open(file, O_RDWR);
    if (fd == -1)
    {
        close(fd);
        creat(file, S_IRWXU);
        fd = open(file, O_RDWR);
    }
    return (fd);
}