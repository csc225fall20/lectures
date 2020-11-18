#include <stdio.h>

/* NOTE: "sleep" is not in the C standard library; it's part of the functions
 *       specified by the POSIX and Single Unix specifications. */
#include <unistd.h>

int main(void) {
    /* NOTE: This printed string does not have a newline, so by default, it will
     *       not immediately be printed... */
    printf("Hello, ");

    /* To force stdout to be flushed even though a newline has not been seen: */
    fflush(stdout);
    sleep(1);

    /* NOTE: ...only once a newline is seen will all of the buffered output be
     *       written at once. */
    printf("world!\n");

    return 0;
}
