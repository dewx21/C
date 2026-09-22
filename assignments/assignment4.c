/*
 * File: 26SCSE1180482_DewanshPratapSingh_Lab04_Set1.c
 * 
 * Question 1: Switch-case - Simple Calculator (3 Marks)
 * A C program that implements a simple calculator using switch-case, reading two numbers 
 * and an operator (+, -, *, /) and performing the selected arithmetic operation, handling division by zero.
 * Input: First line contains two numbers a and b followed by an arithmetic operator (+, -, *, /).
 * Output: The result of the selected operation, or "Division by zero is not allowed" if applicable.
 */

#include <stdio.h>
 
int q1_main() {
    double a, b, result;
    char op;
 
    printf("Enter two numbers and an operator (a b op): ");
    scanf("%lf %lf %c", &a, &b, &op);
 
    switch (op) {
        case '+':
            result = a + b;
            printf("Result = %.0f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %.0f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %.0f\n", result);
            break;
        case '/':
            if (b == 0)
                printf("Division by zero is not allowed\n");
            else {
                result = a / b;
                printf("Result = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid operator\n");
    }
 
    return 0;
}

/*
 * Question 2: Menu-driven Calculator using switch-case (5 Marks)
 * A menu-driven calculator using switch-case with choices 1. Addition, 2. Subtraction, 3. Multiplication, 4. Division, 
 * reading the user's choice and two numbers, handling invalid choices and division by zero safely.
 * Input: First line contains an integer choice (1 to 4), followed by two numbers a and b.
 * Output: The selected operation and its result with a clear label, or an appropriate error message for an invalid choice/division by zero.
 */

#include <stdio.h>
 
int q2_main() {
    int choice;
    double a, b, result;
 
    printf("Enter choice (1-Add 2-Sub 3-Mul 4-Div): ");
    scanf("%d", &choice);
    printf("Enter two numbers (a b): ");
    scanf("%lf %lf", &a, &b);
 
    switch (choice) {
        case 1:
            result = a + b;
            printf("Selected Operation: Addition\n");
            printf("Result = %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Selected Operation: Subtraction\n");
            printf("Result = %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Selected Operation: Multiplication\n");
            printf("Result = %.2f\n", result);
            break;
        case 4:
            printf("Selected Operation: Division\n");
            if (b == 0)
                printf("Division by zero is not allowed\n");
            else {
                result = a / b;
                printf("Result = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid menu choice\n");
    }
 
    return 0;
}

/*
 * Question 3: For Loop - Sum of First n Natural Numbers (2 Marks)
 * A C program that reads a positive integer n and uses a for loop to calculate the sum of the first n natural numbers.
 * Input: First line contains a positive integer n.
 * Output: The sum of the first n natural numbers with a clear label.
 */

#include <stdio.h>
 
int q3_main() {
    int n, sum = 0;
 
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
 
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
 
    printf("Sum of first %d natural numbers = %d\n", n, sum);
 
    return 0;
}