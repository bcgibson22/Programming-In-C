#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/*makes sure code is included*/
#ifndef FILE_SUPPORT

#define FILE_SUPPORT
void print_usage(void);
FILE* gropen(char* infile);
FILE* gwopen(char* outfile);
#define MAXWIDTH 100
#define EXTRASPACES 2
#define NUMARGS 3

typedef enum {
    FALSE,
    TRUE
} BOOLEAN;

#endif
