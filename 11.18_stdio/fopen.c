#include <stdio.h>

int main(void) {
    FILE *file;

    /* To open a file for writing (create the file if it does not exist; wipe
     * the existing contents if it does): */
    file = fopen("hello.txt", "w");

    /* To print to a file that has been opened for writing: */
    fprintf(file, "Hello, world!\n");

    /* NOTE: Scanning is not allowed from a file that has not been opened for
     *       reading. */
    /* fscanf(file, "%d", &x); */

    /* NOTE: If an open file is not closed, the dynamically allocated memory
     *       for its FILE structure is leaked. */
    fclose(file);

    return 0;
}
