#ifndef __CMDREADER_H__
#define __CMDREADER_H__

#include <stdlib.h>
#include <stdbool.h>

#include "destinationcmd.h"
#include "srccmd.h"

#include "encryptcmd.h"
#include "readfile.h"
#include "writefile.h"
#include "readerrealloc.h"

#include "strcmp.h"
#include "strlen.h"
#include "strcpy.h"
#include "realloc.h"

void cmd_reader(char **argv);

#endif /* __CMDREADER_H__ */