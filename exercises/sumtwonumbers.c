#include <stdio.h>

int main() {
    double num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;

    printf("Sum = %.2f\n", sum);

    return 0;
}
