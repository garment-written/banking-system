// main.c
#include <stdio.h>
#include "account.h"
#include "transaction.h"

int main() {
    struct Account account1, account2;
    struct Transaction transaction1, transaction2;

    initializeAccount(&account1, 1001, "John Doe", 1500.0);
    initializeAccount(&account2, 1002, "Jane Smith", 2000.0);

    initializeTransaction(&transaction1, 1, &account1, "Deposit", 500.0);
    initializeTransaction(&transaction2, 2, &account2, "Withdrawal", 300.0);

    printf("Initial Account Information:\n");
    displayAccount(&account1);
    displayAccount(&account2);

    printf("\nExecuting Transactions:\n");
    processTransaction(&transaction1);
    processTransaction(&transaction2);

    printf("\nFinal Account Information:\n");
    displayAccount(&account1);
    displayAccount(&account2);

    return 0;
}
