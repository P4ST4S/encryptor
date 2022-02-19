/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:58:45
 * @ Description:
 */

#ifndef __RFILE_H__
#define __RFILE_H__

#include <stdlib.h>
#include <unistd.h>

#include "realloc.h"

char *std_read_file(const int fd, size_t *len);

#endif /* __RFILE_H__ */