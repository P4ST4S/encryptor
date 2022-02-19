/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:57:31
 * @ Description:
 */

#ifndef __ENCCMD_H__
#define __ENCCMD_H__

#include <unistd.h>
#include <stdlib.h>

#include "xor.h"
#include "switch.h"
#include "shaker.h"
#include "hash.h"
#include "caesar.h"
#include "bytbit.h"
#include "bitshaker.h"

#include "readerrealloc.h"

#include "strcmp.h"
#include "strcpy.h"
#include "printbase10.h"

void encrypt_cmd(char *data, size_t len, char *key, bool cipher, char *encryptor);

#endif /* __ENCCMD_H__ */