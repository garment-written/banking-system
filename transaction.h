// transaction.h
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "account.h"

struct Transaction {
    int transactionID;
    struct Account account;
    char description[100];
    double amount;
};

void processTransaction(struct Transaction *transaction);
void displayTransaction(const struct Transaction *transaction);

#endif // TRANSACTION_H
