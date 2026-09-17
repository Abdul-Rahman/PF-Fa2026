#include <stdio.h>
int main(){
    int accountType, transaction;
    float balance, amount;
    printf("===== SMART BANKING TERMINAL =====\n");
    printf("\nSelect Account Type:\n");
    printf("1. Savings Account\n");
    printf("2. Current Account\n");
    printf("3. Student Account\n");
    printf("Enter choice: ");
    scanf("%d", &accountType);
    printf("\nEnter Current Balance: ");
    scanf("%f", &balance);
    printf("\nSelect Transaction:\n");
    printf("1. Deposit\n");
    printf("2. Withdrawal\n");
    printf("3. Balance Inquiry\n");
    printf("Enter choice: ");
    scanf("%d", &transaction);
    switch(accountType) {
        case 1:
            printf("\n--- SAVINGS ACCOUNT ---\n");
            switch(transaction) {
                case 1:
                    printf("Enter deposit amount: ");
                    scanf("%f", &amount);
                    if(amount > 0){
                        balance += amount;
                        printf("Deposit successful.\n");
                        printf("Updated Balance: %.2f", balance);
                    } else {
                        printf("Invalid deposit amount.");
                    }
                    break;
                case 2:
                    printf("Enter withdrawal amount: ");
                    scanf("%f", &amount);
                    if(amount > 0 && amount <= balance){
                        balance -= amount;
                        printf("Withdrawal successful.\n");
                        printf("Remaining Balance: %.2f", balance);
                    } else {
                        printf("Insufficient balance or invalid amount.");
                    }
                    break;
                case 3:
                    printf("Current Balance: %.2f", balance);
                    break;
                default:
                    printf("Invalid transaction.");
            }
            break;
        case 2:
            printf("\n--- CURRENT ACCOUNT ---\n");
            switch(transaction) {
                case 1:
                    printf("Enter deposit amount: ");
                    scanf("%f", &amount);
                    if(amount > 0) {
                        balance += amount;
                        printf("Deposit successful.");
                        printf("\nUpdated Balance: %.2f", balance);
                    } else {
                        printf("Invalid amount.");
                    }
                    break;
                case 2:
                    printf("Enter withdrawal amount: ");
                    scanf("%f", &amount);
                    if(amount > 0 && amount+50000 <= balance) {
                        balance -= amount;
                        printf("Withdrawal approved.");
                        printf("\nRemaining Balance: %.2f", balance);
                    } else {
                        printf("Withdrawal exceeds overdraft limit.");
                    }
                    break;
                case 3:
                    printf("Current Balance: %.2f", balance);
                    break;
                default:
                    printf("Invalid transaction.");
            }
            break;
        case 3:
            printf("\n--- STUDENT ACCOUNT ---\n");
            switch(transaction) {
                case 1:
                    printf("Enter deposit amount: ");
                    scanf("%f", &amount);
                    if(amount > 0) {
                        balance += amount;
                        printf("Deposit successful.");
                        printf("\nUpdated Balance: %.2f", balance);
                    } else {
                        printf("Invalid amount.");
                    }
                    break;
                case 2:
                    printf("Enter withdrawal amount: ");
                    scanf("%f", &amount);
                    if(amount > 0 && balance - amount >= 2000) {
                        balance -= amount + 50;
                        printf("Withdrawal approved with Rs. 50 service charge.");
                        printf("\nRemaining Balance: %.2f", balance);
                    } else {
                        printf("Withdrawal denied. Minimum balance requirement not satisfied.");
                    }
                    break;
                case 3:
                    printf("Current Balance: %.2f", balance);
                    break;
                default:
                    printf("Invalid transaction.");
            }
            break;
        default:
            printf("Invalid account type.");
    }
    return 0;
}