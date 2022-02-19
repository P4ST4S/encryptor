/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:58:49
 * @ Description:
 */

#ifndef __WFILE_H__
#define __WFILE_H__

#include <stdlib.h>
#include <unistd.h>

#include "strlen.h"

void std_write_file(const int fd, const char *buf, size_t *len);

#endif /* __WFILE_H__ */