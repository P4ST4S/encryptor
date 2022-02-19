/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-02-19 08:28:54
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-02-19 16:57:24
 * @ Description:
 */

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