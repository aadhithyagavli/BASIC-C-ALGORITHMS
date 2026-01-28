#include <stdio.h>

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    // Assign integer
    data.i = 10;
    printf("data.i = %d\n", data.i);

    // Assign float (overwrites integer)
    data.f = 220.5;
    printf("data.f = %.2f\n", data.f);

    // Assign string (overwrites float)
    strcpy(data.str, "Hello");
    printf("data.str = %s\n", data.str);

    // Notice how only the last assignment is valid
    printf("\nFinal values in union:\n");
    printf("data.i = %d\n", data.i);   // corrupted
    printf("data.f = %.2f\n", data.f); // corrupted
    printf("data.str = %s\n", data.str); // valid

    return 0;
}