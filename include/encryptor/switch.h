/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:58:24
 * @ Description:
 */

#ifndef __SWITCH_H__
#define __SWITCH_H__

#include <stdlib.h>
#include <stdbool.h>

#include "binary.h"
#include "strlen.h"
#include "strnlen.h"

void std_switch(char *cnt, size_t len, const char *key, bool cipher);

#endif /* __SWITCH_H__ */