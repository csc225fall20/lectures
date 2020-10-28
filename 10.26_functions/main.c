/* To copy the contents of a standard library header: */
#include <stdio.h>

/* To copy the contents of a custom header: */
#include "add.h"

int main(void) {
    /* To call a function that takes two ints and returns an int: */
    printf("1 + 2 = %d\n", add(1, 2));

    return 0;
}
