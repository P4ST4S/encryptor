/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:56:10
 * @ Description:
 */

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