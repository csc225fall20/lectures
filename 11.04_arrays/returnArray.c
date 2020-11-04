#include <stdio.h>

int* foo();

int main(void) {
    int *a1;
    a1 = foo();

    /* NOTE: ..."printf" is a function, and calling it will likely overwrite
     *       "foo"s data, including "a2". */
    printf("a1: %p\n", (void *)a1);
    printf(" |- %p: %d\n", (void *)(a1 + 0), a1[0]);
    printf(" +- %p: %d\n", (void *)(a1 + 1), a1[1]);

    return 0;
}

int* foo() {
    int a2[2] = {0, 0};

    printf("a2: %p\n", (void *)a2);
    printf(" |- %p: %d\n", (void *)(a2 + 0), a2[0]);
    printf(" +- %p: %d\n", (void *)(a2 + 1), a2[1]);

    /* NOTE: This returns a pointer to local data that will be deallocated as
     *       soon as this function returns... */
    return a2;
}
