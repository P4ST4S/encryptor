/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:58:42
 * @ Description:
 */

#ifndef __REREALLOC_H__
#define __REREALLOC_H__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "realloc.h"

char *std_read_realloc(const int fd, size_t *len);

#endif /* __REREALLOC_H__ */