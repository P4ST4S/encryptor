#ifndef __SWITCH_H__
#define __SWITCH_H__

#include <stdlib.h>
#include <stdbool.h>

#include "binary.h"
#include "strlen.h"
#include "strnlen.h"

void std_switch(char *cnt, size_t len, const char *key, bool cipher);

#endif /* __SWITCH_H__ */