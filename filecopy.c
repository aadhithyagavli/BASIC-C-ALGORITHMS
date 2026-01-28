#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Required for toupper()

int main() {
    FILE *src, *dest;
    char ch;

    // 1. Open the source file for reading
    src = fopen("source.txt", "r");
    if (src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // 2. Open (or create) the destination file for writing
    dest = fopen("destination.txt", "w");
    if (dest == NULL) {
        perror("Error opening destination file");
        fclose(src); // Clean up the already opened source file
        return 1;
    }

    // 3. Read character by character until End of File (EOF)
    while ((ch = fgetc(src)) != EOF) {
        // toupper() converts lowercase to uppercase. 
        // If the char is already uppercase or a symbol, it stays the same.
        fputc(toupper(ch), dest);
    }

    printf("File copied and converted to uppercase successfully.\n");

    // 4. Always close your files to free up resources
    fclose(src);
    fclose(dest);

    return 0;
}