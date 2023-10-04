#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2, complex result) {
    result.real = n1.real + n2.real;
    result.imag = n1.imag + n2.imag;
    return (result);
}

int main() {
    complex n1, n2, result;
    n1.real = 5;
    n1.imag = 6;
    n2.real = 5;
    n2.imag = 6;

    result = add(n1, n2,result);

    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    return 0;
}

