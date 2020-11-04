#include <stdio.h>

void swap(int *, int *);

int main(void) {
    int z = 1, w = 2;

    /* Pass the addresses of "z" and "w": */
    swap(&z, &w);

    printf("z: %d, w: %d\n", z, w);
}

/* Take two pointers to integers: */
void swap(int *x, int *y) {
    int temp = *x;  /* Get the value that "x" points to. */
    *x = *y;        /* Set the value that "x" points to equal to the value that
                     *  "y" points to. */
    *y = temp;      /* Set the value that "y" points to equal to the value that
                     *  "x" originally pointed to. */
}
