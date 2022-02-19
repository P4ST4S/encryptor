/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:56:26
 * @ Description:
 */

#include "srccmd.h"

int src_cmd(char *file)
{
    int fd;

    fd = open(file, O_RDWR);
    if (fd == -1)
        write(1, "Error when opening file\n", 24);
    return (fd);
}