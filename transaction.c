// transaction.c
#include <stdio.h>
#include "transaction.h"

void processTransaction(struct Transaction *transaction) {
    // Perform necessary transaction processing
    // For simplicity, just display the transaction details
    printf("Processing Transaction ID: %d\n", transaction->transactionID);
    displayTransaction(transaction);
}

void displayTransaction(const struct Transaction *transaction) {
    printf("Account Information:\n");
    displayAccount(&transaction->account);
    printf("Description: %s\n", transaction->description);
    printf("Amount: $%.2f\n", transaction->amount);
}
