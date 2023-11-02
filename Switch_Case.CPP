#include <stdio.h>

int main() {
    int choice;

    printf("Choose an option:\n");
    printf("1. Print Hello\n");
    printf("2. Print Goodbye\n");
    printf("3. Print Thank You\n");
    printf("4. Quit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Hello!\n");
            break;
        case 2:
            printf("Goodbye!\n");
            break;
        case 3:
            printf("Thank You!\n");
            break;
        case 4:
            printf("Quitting the program.\n");
            break;
        default:
            printf("Invalid choice. Please choose a valid option.\n");
    }

    return 0;
}
