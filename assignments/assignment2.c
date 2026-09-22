/*
 * File: 26SCSE1180482_DewanshPratapSingh_Lab02_Set1.c
 * 
 * Question 1: Arithmetic and Relational Operators (3 Marks)
 * A C program that reads two integers and performs addition, subtraction, multiplication and integer division 
 * using arithmetic operators, and uses relational operators to compare the two numbers.
 * Input: First line contains two integers a and b. Assume b is non-zero.
 * Output: Sum, Difference, Product, Quotient and the appropriate comparison result.
 */

#include <stdio.h>
 
int q1_main() {
    int a, b, sum, difference, product, quotient;
 
    printf("Enter two integers (a b): ");
    scanf("%d %d", &a, &b);
 
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
 
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);
 
    if (a > b)
        printf("%d is greater than %d\n", a, b);
    else if (a < b)
        printf("%d is less than %d\n", a, b);
    else
        printf("%d is equal to %d\n", a, b);
 
    return 0;
}

/*
 * Question 2: Logical and Bitwise Operators (5 Marks)
 * A C program that reads two integers a and b and demonstrates logical AND, logical OR, logical NOT of a, 
 * and bitwise AND, OR, XOR and left/right shift operations.
 * Input: First line contains two non-negative integers a and b.
 * Output: The result of each specified logical and bitwise operation in a clear labelled format.
 */

#include <stdio.h>
 
int q2_main() {
    int a, b;
 
    printf("Enter two non-negative integers (a b): ");
    scanf("%d %d", &a, &b);
 
    printf("Logical AND (a && b) = %d\n", a && b);
    printf("Logical OR  (a || b) = %d\n", a || b);
    printf("Logical NOT (!a)     = %d\n", !a);
    printf("Bitwise AND (a & b)  = %d\n", a & b);
    printf("Bitwise OR  (a | b)  = %d\n", a | b);
    printf("Bitwise XOR (a ^ b)  = %d\n", a ^ b);
    printf("Left Shift  (a << 1) = %d\n", a << 1);
    printf("Right Shift (a >> 1) = %d\n", a >> 1);
 
    return 0;
}

/*
 * Question 3: Decision Making - Even or Odd (2 Marks)
 * A C program that reads an integer N and uses an if-else statement with the modulus operator to determine whether N is even or odd.
 * Input: First line contains an integer N.
 * Output: "Even" if N is divisible by 2; otherwise "Odd".
 */

#include <stdio.h>
 
int q3_main() {
    int n;
 
    printf("Enter an integer N: ");
    scanf("%d", &n);
 
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
 
    return 0;
}