#include <stdio.h>

typedef struct {
    int id;
    int money;
    char name[30];
} Account;

int main() {
    int num_accounts;
    
    printf("How many accounts do you want to create? ");
    scanf("%d", &num_accounts);
    
    Account account_array[num_accounts];
    
    printf("-- Create Accounts --\n");
    for (int i = 0; i < num_accounts; i++) {
        printf("Account #%d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &account_array[i].id);
        printf("Enter Money: ");
        scanf("%d", &account_array[i].money);
        printf("Enter Name: ");
        scanf("%s", account_array[i].name);
        printf("\n");
    }
    
    printf("**** RECORDS INSERTED ****\n");
    for (int i = 0; i < num_accounts; i++) {
        printf("Account #%d:\n", i + 1);
        printf("ID: %d\n", account_array[i].id);
        printf("Name: %s\n", account_array[i].name);
        printf("Money: %d\n\n", account_array[i].money);
    }
    
    return 0;
}

/* edits made:
the number variable and the id, input_money, and name variables have been removed since they were not being used.
the number of accounts is read from the user and used to declare the array size */
