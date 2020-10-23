/* Instruct the preprocessor to include information from the standard I/O
 * library: */
#include <stdio.h>

/* Instruct the preprocessor to replace all instances of "PI" with "3.14": */
#define PI 3.14

/* Execution always begins with the function "main": */
int main(void) {
    /* To declare a variable integer named "x", uninitialized: */
    int x;

    /* To declare a variable double named "y", initialized to PI: */
    double y = PI;

    /* To read an integer into a variable: */
    printf("Type a value for x: ");
    scanf(" %d", &x);

    /* To print out variables: */
    printf("x has value %d and y has value %f.\n", x, y);

    return 0;
}
