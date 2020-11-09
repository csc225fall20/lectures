#include <stdio.h>

void foo(int *);

int main(void) {
    int mat[2][2] = {{1, 2}, {3, 4}};

    printf("mat: %p\n", (void *)mat);
    printf(" |- mat[0]: %p\n", (void *)(&mat[0]));
    printf(" |----- %p: %d\n", (void *)(&mat[0][0]), mat[0][0]);
    printf(" |----- %p: %d\n", (void *)(&mat[0][1]), mat[0][1]);
    printf(" |- mat[1]: %p\n", (void *)(&mat[1]));
    printf(" |----- %p: %d\n", (void *)(&mat[1][0]), mat[1][0]);
    printf(" +----- %p: %d\n", (void *)(&mat[1][1]), mat[1][1]);

    foo(&mat[0][0]);

    return 0;
}

void foo(int *mat) {
    /* NOTE: Must access "mat" using "mat[i * 2 + j]". */
}
