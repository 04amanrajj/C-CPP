#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the first number: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input for the first number.\n");
        return 1; // Exit with an error code
    }

    printf("Enter the second number: ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid input for the second number.\n");
        return 1; // Exit with an error code
    }

    c = a + b;

    printf("The total is: %d\n", c);

    return 0;
}
