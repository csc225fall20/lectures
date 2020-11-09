#include <stdio.h>

void foo(int **);

int main(void) {
    int row1[2] = {1, 2}, row2[2] = {3, 4}, *mat[2];

    mat[0] = row1;
    mat[1] = row2;

    printf("mat: %p\n", (void *)mat);
    printf(" |- %p: %p\n", (void *)(&mat[0]), (void *)(mat[0]));
    printf(" +- %p: %p\n", (void *)(&mat[0]), (void *)(mat[1]));
    printf("mat[0]: %p\n", (void *)(mat[0]));
    printf(" |- %p: %d\n", (void *)(&mat[0][0]), mat[0][0]);
    printf(" +- %p: %d\n", (void *)(&mat[0][1]), mat[0][1]);
    printf("mat[1]: %p\n", (void *)(mat[1]));
    printf(" |- %p: %d\n", (void *)(&mat[1][0]), mat[1][0]);
    printf(" +- %p: %d\n", (void *)(&mat[1][1]), mat[1][1]);

    foo(mat);

    return 0;
}

void foo(int **mat) {
    /* NOTE: May access "mat" using "mat[i][j]". */
}
