#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0;
    float amount;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is:%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit:");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited %.2f\n", amount);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Successfully withdrew %.2f\n", amount);
                } else if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    printf("Invalid withdrawal amount!\n");
                }
                break;
            case 4:
                printf("Exiting the program\n");
                return 0;
            default:
                printf("Invalid choice!\n");
                break;
        }

    return 0;
}
