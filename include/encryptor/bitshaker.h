/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:58:06
 * @ Description:
 */

#ifndef __BSHAKER_H__
#define __BSHAKER_H__

#include <stdlib.h>
#include <stdbool.h>

#include "strlen.h"

void std_bitshake(char *cnt, size_t len, char *key, bool cipher);

#endif /* __BSHAKER_H__ */