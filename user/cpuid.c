#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "user/user.h"

void
cpuid(void) {
    
}

int
main(int argc, char *argv[]) {
    if (argc > 1) {
        fprintf(2, "cpuid: unknown argument\n");
        exit(1);
    }
    fprintf(2, "hello\n");
}