#ifndef __RFILE_H__
#define __RFILE_H__

#include <stdlib.h>
#include <unistd.h>

#include "realloc.h"

char *std_read_file(const int fd, size_t *len);

#endif /* __RFILE_H__ */