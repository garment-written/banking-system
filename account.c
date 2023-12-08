// account.c
#include <stdio.h>
#include "account.h"

void initializeAccount(struct Account *account, int accountNumber, const char *accountHolder, double balance) {
    account->accountNumber = accountNumber;
    snprintf(account->accountHolder, sizeof(account->accountHolder), "%s", accountHolder);
    account->balance = balance;
}

void displayAccount(const struct Account *account) {
    printf("Account Number: %d\n", account->accountNumber);
    printf("Account Holder: %s\n", account->accountHolder);
    printf("Balance: $%.2f\n", account->balance);
}

void deposit(struct Account *account, double amount) {
    account->balance += amount;
}

void withdraw(struct Account *account, double amount) {
    if (amount <= account->balance) {
        account->balance -= amount;
    } else {
        printf("Insufficient funds!\n");
    }
}
