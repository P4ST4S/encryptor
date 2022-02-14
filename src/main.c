#include <stdlib.h>
#include "cmdreader.h"

int main(int argc, char *argv[])
{
    if (argc < 1)
        return (EXIT_FAILURE);
    cmd_reader(argv);
    return (EXIT_SUCCESS);
}
