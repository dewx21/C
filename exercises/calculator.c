#include <stdio.h>

static void clear_input(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        /* Discard invalid input. */
    }
}

int main(void)
{
    int choice;
    double a, b, result;

    printf("Simple Calculator\n");

    for (;;) {
        printf("\nChoose an operation:\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n0. Exit\n> ");

        if (scanf("%d", &choice) != 1) {
            printf("Please enter a number.\n");
            clear_input();
            continue;
        }

        if (choice == 0) {
            printf("Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &a, &b) != 2) {
                printf("Invalid input.\n");
                clear_input();
                continue;
            }
        } else {
            printf("Unknown operation.\n");
            continue;
        }

        switch (choice) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            if (b == 0) {
                printf("Cannot divide by zero.\n");
                continue;
            }
            result = a / b;
            break;
        default:
            continue;
        }

        printf("Result: %.10g\n", result);
    }

    return 0;
}