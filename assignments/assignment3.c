/*
 * File: 26SCSE1180482_DewanshPratapSingh_Lab03_Set1.c
 * 
 * Question 1: Largest of Three Numbers using Nested if (3 Marks)
 * A C program that reads three integers a, b and c and finds the largest number using nested if statements 
 * (without the ternary operator or library functions), correctly handling equal values.
 * Input: First line contains three integers a, b and c.
 * Output: The largest of the three numbers with a clear label.
 */

#include <stdio.h>
 
int q1_main() {
    int a, b, c, largest;
 
    printf("Enter three integers (a b c): ");
    scanf("%d %d %d", &a, &b, &c);
 
    if (a >= b) {
        if (a >= c)
            largest = a;
        else
            largest = c;
    } else {
        if (b >= c)
            largest = b;
        else
            largest = c;
    }
 
    printf("Largest = %d\n", largest);
 
    return 0;
}

/*
 * Question 2: Dangling else Problem Demonstration (5 Marks)
 * A C program that demonstrates the dangling-else problem using an unbraced nested if statement 
 * (where the else binds to the nearest/inner if), and then a corrected braced version where the else is explicitly bound to the intended if.
 * Input: First line contains two integers x and y, followed by an integer choice (0 or 1) that controls the outer condition.
 * Output: The result produced by the unbraced version and the corrected braced version on separate labelled lines.
 */

#include <stdio.h>
 
int q2_main() {
    int x, y, choice;
 
    printf("Enter x y choice(0/1): ");
    scanf("%d %d %d", &x, &y, &choice);
 
    /* Unbraced version - demonstrates the dangling else problem.
       With no braces, the else below binds to the NEAREST if
       (the inner "if (x > y)"), NOT the outer "if (choice==1)",
       even though the indentation suggests otherwise. */
    if (choice == 1)
        if (x > y)
            printf("Unbraced: Inner condition true (x > y)\n");
        else
            printf("Unbraced: Else bound to INNER if (bug)\n");
 
    /* Braced version - ambiguity removed, else bound as intended. */
    if (choice == 1) {
        if (x > y)
            printf("Braced: Inner condition true (x > y)\n");
        else
            printf("Braced: Inner condition false (x <= y)\n");
    } else {
        printf("Braced: Outer condition false (choice != 1)\n");
    }
 
    return 0;
}

/*
 * Question 3: Correcting Dangling else using Braces - Score Classification (2 Marks)
 * A C program that accepts an integer score and uses nested if-else statements with braces 
 * to classify it as Excellent (>=75), Good (40 to <75), or Fail (<40), avoiding any dangling-else ambiguity.
 * Input: First line contains an integer score (0 to 100).
 * Output: "Excellent" for score >= 75, "Good" for score >= 40 and below 75, otherwise "Fail".
 */

#include <stdio.h>
 
int q3_main() {
    int score;
 
    printf("Enter score (0 to 100): ");
    scanf("%d", &score);
 
    if (score < 40) {
        printf("Fail\n");
    } else {
        if (score >= 75) {
            printf("Excellent\n");
        } else {
            printf("Good\n");
        }
    }
 
    return 0;
}