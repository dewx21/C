/*
 * File: 26SCSE1180482_DewanshPratapSingh_Lab05_Set1.c
 * 
 * Q1: Factorial of a Number using while Loop (3 Marks)
 * A C program to calculate the factorial of a given positive integer using a while loop.
 * Input: A positive integer n.
 * Output: The factorial of n with a clear label.
 */

#include <stdio.h>
 
int q1_main() {
    int n;
    long long factorial = 1;
    int i = 1;
 
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
 
    while (i <= n) {
        factorial = factorial * i;
        i++;
    }
 
    printf("Factorial of %d = %lld\n", n, factorial);
 
    return 0;
}

/*
 * Q2: Multiplication Table using do-while Loop (5 Marks)
 * A C program using a do-while loop to display the multiplication table of a given number from 1 to 10.
 * Input: A number n.
 * Output: The multiplication table of n from 1 to 10, one line per entry.
 */

#include <stdio.h>
 
int q2_main() {
    int n, i = 1;
 
    printf("Enter number: ");
    scanf("%d", &n);
 
    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);
 
    return 0;
}

/*
 * Q3: Repeat Multiplication Table until User Declines (2 Marks)
 * A modified version of the multiplication-table program that, after displaying one table using a do-while loop, 
 * asks the user whether another table should be displayed, continuing only while the user enters Y/y.
 * Input: A number, followed by a Y/N response, repeated until the user enters N/n.
 * Output: The multiplication table for each number entered, until the user declines to continue.
 */

#include <stdio.h>
 
int q3_main() {
    int n, i;
    char again;
 
    do {
        printf("Enter number: ");
        scanf("%d", &n);
 
        i = 1;
        do {
            printf("%d x %d = %d\n", n, i, n * i);
            i++;
        } while (i <= 10);
 
        printf("Do you want another table? (Y/N): ");
        scanf(" %c", &again);
 
    } while (again == 'Y' || again == 'y');
 
    return 0;
}