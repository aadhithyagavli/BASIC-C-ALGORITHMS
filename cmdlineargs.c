#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    // argc = argument count
    // argv = argument vector (array of strings)

    printf("Number of arguments: %d\n", argc);

    printf("Arguments passed:\n");
    for (i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}