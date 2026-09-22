/*
 * File: 26SCSE1180482_DewanshPratapSingh_Lab06_Set1.c
 * 
 * Q1: Right-Angled Star Pattern using Nested Loops (3 Marks)
 * A C program using nested loops to print a right-angled star pattern for n rows, 
 * using the inner loop to print stars and the outer loop to control rows.
 * Input: A positive integer n (number of rows).
 * Output: The right-angled star pattern, one row per line.
 */

#include <stdio.h>
 
int q1_main() {
    int n;
 
    printf("Enter number of rows n: ");
    scanf("%d", &n);
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
 
    return 0;
}

/*
 * Q2: Prime Check using a User-Defined Function (5 Marks)
 * A C program to check whether a given integer is prime, with the logic implemented inside a user-defined function, 
 * including a function prototype (declaration), function definition and function call from main().
 * Input: An integer to be checked.
 * Output: Whether the number is a prime number or not.
 */

#include <stdio.h>
 
/* Function prototype (declaration) */
int isPrime(int n);
 
int q2_main() {
    int num;
 
    printf("Enter an integer: ");
    scanf("%d", &num);
 
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
 
    return 0;
}
 
/* Function definition */
int isPrime(int n) {
    if (n <= 1)
        return 0;
 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
 
    return 1;
}

/*
 * Q3: Inverted Right-Angled Triangle using Nested Loops (2 Marks)
 * A modified version of the star-pattern program that prints an inverted right-angled triangle 
 * using nested loops, with the number of rows entered by the user.
 * Input: A positive integer n (number of rows).
 * Output: The inverted right-angled triangle pattern, one row per line.
 */

#include <stdio.h>
 
int q3_main() {
    int n;
 
    printf("Enter number of rows n: ");
    scanf("%d", &n);
 
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
 
    return 0;
}
