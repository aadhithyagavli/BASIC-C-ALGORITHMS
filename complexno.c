#include <stdio.h>

// Define a structure to represent a complex number
typedef struct {
    float real;
    float imag;
} Complex;

// Function prototypes
Complex add(Complex n1, Complex n2);
Complex subtract(Complex n1, Complex n2);
Complex multiply(Complex n1, Complex n2);
Complex divide(Complex n1, Complex n2);

int main() {
    Complex num1, num2, result;

    printf("Enter real and imaginary parts for first number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter real and imaginary parts for second number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Addition
    result = add(num1, num2);
    printf("\nAddition: %.2f + %.2fi", result.real, result.imag);

    // Subtraction
    result = subtract(num1, num2);
    printf("\nSubtraction: %.2f + %.2fi", result.real, result.imag);

    // Multiplication
    result = multiply(num1, num2);
    printf("\nMultiplication: %.2f + %.2fi", result.real, result.imag);

    // Division
    result = divide(num1, num2);
    if (num2.real == 0 && num2.imag == 0) {
        printf("\nDivision: Error (Division by zero)");
    } else {
        printf("\nDivision: %.2f + %.2fi\n", result.real, result.imag);
    }

    return 0;
}

Complex add(Complex n1, Complex n2) {
    Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

Complex subtract(Complex n1, Complex n2) {
    Complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return temp;
}

Complex multiply(Complex n1, Complex n2) {
    Complex temp;
    temp.real = (n1.real * n2.real) - (n1.imag * n2.imag);
    temp.imag = (n1.real * n2.imag) + (n1.imag * n2.real);
    return temp;
}

Complex divide(Complex n1, Complex n2) {
    Complex temp;
    float denominator = (n2.real * n2.real) + (n2.imag * n2.imag);
    
    if (denominator != 0) {
        temp.real = (n1.real * n2.real + n1.imag * n2.imag) / denominator;
        temp.imag = (n1.imag * n2.real - n1.real * n2.imag) / denominator;
    } else {
        temp.real = 0;
        temp.imag = 0;
    }
    return temp;
}