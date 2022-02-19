/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:59:35
 * @ Description:
 */

#ifndef __REALLOC_H__
#define __REALLOC_H__

#include <stdlib.h>
#include <malloc.h>

#include "memcpy.h"

void *std_realloc(void *ptr, size_t new_size);

#endif /* __REALLOC_H__ */