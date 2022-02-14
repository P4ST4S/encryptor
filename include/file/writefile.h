#ifndef __WFILE_H__
#define __WFILE_H__

#include <stdlib.h>
#include <unistd.h>

#include "strlen.h"

void std_write_file(const int fd, const char *buf, size_t *len);

#endif /* __WFILE_H__ */