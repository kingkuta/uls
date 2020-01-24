#include "uls.h"

int main(int argc, char **argv) {
    if (argc == 1)
        do_ls(".");
    else
        while (--argc) {
            printf("%s:\n", *--argv);
            do_ls(*argv);
        }
    return 0;
}
