#include <stdio.h>
#include <string.h>

int main() {
    char source[100];      // Array to store original string
    char destination[100]; // Array to store the copy

    printf("Enter a multiword string: ");

    // 1. Read multiword string using fgets
    // Syntax: fgets(buffer, size, input_stream)
    fgets(source, sizeof(source), stdin);

    // Optional: Remove the trailing newline character added by fgets
    source[strcspn(source, "\n")] = '\0';

    // 2. Copy source to destination using strcpy
    // Syntax: strcpy(destination, source)
    strcpy(destination, source);

    // 3. Display the results
    printf("\nOriginal String: %s", source);
    printf("\nCopied String:   %s\n", destination);

    return 0;
}