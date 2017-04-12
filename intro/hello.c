#include "apue.h"

int
main(void) {
    printf("long size = %ld\n", sizeof(long));
    printf("double size = %ld\n", sizeof(double));
    printf("int size = %ld\n", sizeof(int));
    printf("char size = %ld\n", sizeof(char));
    /* printf("max double = %lf\n", ); */
    printf("hello world from process ID %ld\n", (long) getpid());
    exit(0);
}
