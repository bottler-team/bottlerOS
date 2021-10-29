#include "unblock.h"

void unblock(int argc, char ** argv) {
    if (argc != 2) {
        printStringLen("unblock receives a pid\n", 21);
        sys_exit();
    }
    int pid = atoi(argv[1], MAX_LEN);

    sys_unblock(pid);
    sys_exit();
}