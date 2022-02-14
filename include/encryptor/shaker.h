#ifndef __SHAKER_H__
#define __SHAKER_H__

#include <stdlib.h>
#include <stdbool.h>

#include "strnlen.h"
#include "strlen.h"

void std_shaker(char *cnt, size_t len, char *key, bool cipher);

#endif /* __SHAKER_H__ */