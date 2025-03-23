#include <stdio.h>


int main() {
    double num, square, squareRoot;

    printf("Enter a number: ");
    scanf("%lf", &num);

    square = num * num;

    squareRoot = sqrt(num);

    printf("Square: %.2f\n", square);
    printf("Square Root: %.2f\n", squareRoot);

    return 0;
}
