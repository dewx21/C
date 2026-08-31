#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    int sum = a + b;
    
    printf("Sum of %d and %d is %d\n", a, b, sum);
    
    return 0;
}
