#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int login() {
    const int correctPassword = 1234;
    int userInput;
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter password: ");
        scanf("%d", &userInput);

        if (userInput == correctPassword) {
            printf("Access Granted\n");
            return 1;
        }

        attempts--;
        printf("Access Denied. Attempts left: %d\n", attempts);
    }

    printf("\nYou have been locked out.\nPlease contact the administrator.\n");
    return 0; 
}

void BalanceInquiry(float balance) {
    printf("Your Balance is %.2f\n", balance);
}

float Deposit(float balance) {
    float depositAmount;
    printf("Your current balance is %.2f\n", balance);
    printf("Enter deposit amount: ");
    scanf("%f", &depositAmount);

    balance += depositAmount;

    if (depositAmount <= 0) {
        printf("Invalid amount! Deposit must be more than 0.\n");
        return balance;
    }

    printf("Your new balance is %.2f\n", balance);
    return balance;
}

float Withdrawal(float balance) {
    float withdrawalAmount;
    printf("Your current balance is %.2f\n", balance);
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawalAmount);

    if (withdrawalAmount > balance) {
        printf("Insufficient funds!\n");
        return balance;
    }
    if (withdrawalAmount <= 0) {
        printf("Invalid amount! Withdrawal must be more than 0.\n");
        return balance;
    }


    balance -= withdrawalAmount;
    printf("Your new balance is %.2f\n", balance);
    return balance;
}

void myExit() {
    printf("You have chosen to exit.\n");
    printf("Thank you for banking with us.\n");
}

int main() {
    if (!login()) {
        return 0;   
    }

    float balance = 1000;
    int userChoice;

    while (1) {
        printf("ATM Menu \n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdrawal\n");
        printf("4. Exit\n");
        printf("Please choose one: ");
        scanf("%d", &userChoice);

        switch (userChoice) {
            case 1:
                BalanceInquiry(balance);
                break;

            case 2:
                balance = Deposit(balance);
                break;

            case 3:
                balance = Withdrawal(balance);
                break;

            case 4:
                myExit();
                return 0;

            default:
                printf("Please try again.\n");
        }
    }

    return 0;
}
