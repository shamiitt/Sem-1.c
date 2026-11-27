#include<stdio.h>
float deposit(float balance, float amount);
float withdraw(float balance, float amount);
void checkBalance(float balance);
int main(){
    float balance = 25000.50, amount;
    int choice;
        printf("1: Deposit\n2: Withdraw\n3: Check balance\n4: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the amount to deposit: ");
                scanf("%f", &amount);
                balance = deposit(balance, amount);
                break;

            case 2:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &amount);
                balance = withdraw(balance, amount);
                break;

            case 3:
                checkBalance(balance);
                break;

            case 4:
                printf("Log out successful.\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    return 0;
}

float deposit(float balance, float amount){
    if (amount <= 0){
        printf("Invalid amount\n");
        return balance;
    }
    balance = balance + amount;
    printf("Deposit successful. Available balance = %.2f\n", balance);
    return balance;
}

float withdraw(float balance, float amount){
    if (amount <= 0){
        printf("Invalid amount\n");
    }
    else if (amount > balance){
        printf("Insufficient balance\n");
    }
    else{
        balance = balance - amount;
        printf("Withdrawal successful. Available balance = %.2f\n", balance);
    }
    return balance;
}

void checkBalance(float balance){
    printf("Available balance = %.2f\n", balance);
}