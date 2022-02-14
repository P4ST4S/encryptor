#ifndef __ENCCMD_H__
#define __ENCCMD_H__

#include <unistd.h>
#include <stdlib.h>

#include "xor.h"
#include "switch.h"
#include "shaker.h"
#include "hash.h"
#include "caesar.h"

#include "readerrealloc.h"

#include "strcmp.h"
#include "strcpy.h"
#include "printbase10.h"

void encrypt_cmd(char *data, size_t len, char *key, bool cipher, char *encryptor);

#endif /* __ENCCMD_H__ */