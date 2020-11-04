#include <stdio.h>

void foo(int []);

int main(void) {
    int a1[2];
    foo(a1);

    printf("a1: %p\n", (void *)a1);
    printf(" |- %p: %d\n", (void *)(a1 + 0), a1[0]);
    printf(" +- %p: %d\n", (void *)(a1 + 1), a1[1]);

    return 0;
}

void foo(int a2[]) {
    a2[0] = 5;
}
