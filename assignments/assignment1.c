/*
 * File: 26SCSE1180482_DewanshPratapSingh_Lab01_Set1.c
 * 
 * Question 1: Basic Structure of a C Program (3 Marks)
 * A complete C program following the standard structure of a C program, printing a short course/lab information message 
 * using an appropriate header file, the main() function, variable declarations and printf() statements.
 * Input: No input required.
 * Output: Three lines containing the course name, course code and the message "C Programming Lab Started".
 */

#include <stdio.h>
 
int q1_main() {
    printf("Course Name: Programming for Problem Solving\n");
    printf("Course Code: R1UC107B\n");
    printf("C Programming Lab Started\n");
    return 0;
}

/*
 * Question 2: Variables, Constants, Data Types and Sum of Two Numbers (5 Marks)
 * A C program that declares variables using suitable data types (int, float, double and char), demonstrates the use of a constant, 
 * reads two integers from the user and computes their sum, and displays the declared sample values of the other data types and the constant.
 * Input: First line contains two integers a and b.
 * Output: Values of a and b, their sum, the constant value, and the sample values of the float, double and char variables in a clear labelled format.
 */

#include <stdio.h>
 
int q2_main() {
    const int CONSTANT_VALUE = 100;
    int a, b, sum;
    float sampleFloat = 12.50;
    double sampleDouble = 45.6789;
    char sampleChar = 'A';
 
    printf("Enter two integers (a b): ");
    scanf("%d %d", &a, &b);
 
    sum = a + b;
 
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Sum = %d\n", sum);
    printf("Constant = %d\n", CONSTANT_VALUE);
    printf("Float = %.2f\n", sampleFloat);
    printf("Double = %.4f\n", sampleDouble);
    printf("Char = %c\n", sampleChar);
 
    return 0;
}

/*
 * Question 3: Formatted Input/Output and Arithmetic Verification (2 Marks)
 * A C program that reads two integers and prints their sum, difference and product using appropriate variables 
 * and arithmetic operators, with each result displayed on a separate labelled line.
 * Input: First line contains two integers a and b.
 * Output: Sum, Difference and Product on separate lines.
 */

#include <stdio.h>
 
int q3_main() {
    int a, b, sum, difference, product;
 
    printf("Enter two integers (a b): ");
    scanf("%d %d", &a, &b);
 
    sum = a + b;
    difference = a - b;
    product = a * b;
 
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
 
    return 0;
}