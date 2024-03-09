#include <stdio.h>

int main() {
    int op, a, b;

    printf("Welcome to the calculator!\n");
    printf("Enter your operation (0 to quit):\n");
    printf("(1 for addition) (2 for subtraction) (3 for division) (4 for multiplication)\n");
    printf("Operation: ");
    scanf("%d", &op);

    while (op != 0) {
        printf("Enter the first value: ");
        scanf("%d", &a);
        printf("Enter the second value: ");
        scanf("%d", &b);

        switch (op) {
            case 1:
                printf("Result: %d + %d = %d\n", a, b, a + b);
                break;
            case 2:
                printf("Result: %d - %d = %d\n", a, b, a - b);
                break;
            case 3:
                if (b != 0) {
                    printf("Result: %d / %d = %d\n", a, b, a / b);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            case 4:
                printf("Result: %d * %d = %d\n", a, b, a * b);
                break;
            default:
                printf("Invalid operation\n");
                break;
        }

        printf("\nEnter your operation (0 to quit):\n");
        printf("(1 for addition) (2 for subtraction) (3 for division) (4 for multiplication)\n");
        printf("Operation: ");
        scanf("%d", &op);
    }

    printf("Exiting the program.\n");
    return 0;
}
