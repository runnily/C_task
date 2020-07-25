#include <stdlib.h>
#include "vfsexlib.h" 

int main(int argc, char **argv) {
    if (argc<2) {
        exit(1);
    }
    int i = atoi(argv[1]);
    printmsg(i);
}