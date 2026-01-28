#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2, *f3;
    char ch;

    // 1. Open the source files in read mode
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");

    // 2. Open the destination file in write mode
    f3 = fopen("merged.txt", "w");

    // Check if files opened successfully
    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Error: Could not open one or more files.\n");
        exit(EXIT_FAILURE);
    }

    // 3. Copy contents of file1.txt to merged.txt
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f3);
    }

    // Optional: Add a newline between files for clarity
    fputc('\n', f3);

    // 4. Copy contents of file2.txt to merged.txt
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }

    printf("Files merged successfully into 'merged.txt'.\n");

    // 5. Close all file pointers
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}