// account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

struct Account {
    int accountNumber;
    char accountHolder[50];
    double balance;
};

void initializeAccount(struct Account *account, int accountNumber, const char *accountHolder, double balance);
void displayAccount(const struct Account *account);
void deposit(struct Account *account, double amount);
void withdraw(struct Account *account, double amount);

#endif // ACCOUNT_H
