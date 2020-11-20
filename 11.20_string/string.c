#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    char *str = "Foo. Bar. Bay.", *temp = NULL, *tok = NULL;

    /* To make a copy of an arbitrarily long string: */
    temp = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(temp, str);

    /* To iterate through the tokens of a string: */
    tok = strtok(temp, ". ");
    while (tok != NULL) {
        printf("%s\n", tok);
        tok = strtok(NULL, ". ");
    }

    /* NOTE: "temp" has been irrevocably modified by the tokenization. */
    printf("str: \"%s\"\n", str);
    printf("temp: \"%s\"\n", temp);
    free(temp);

    return 0;
}
