#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int account;
    float balance, charge, credit, limit, newBalance;

    while(1)
    {
        printf("Enter account number (-1 to end): ");
        scanf_s("%d", &account);
        if(account == -1)
            return 0;
        printf("Enter beginning balance: ");
        scanf_s("%f", &balance);
        printf("Enter total charges: ");
        scanf_s("%f", &charge);
        printf("Enter total credits: ");
        scanf_s("%f", &credit);
        printf("Enter credits limit: ");
        scanf_s("%f", &limit);
        printf("\n");
        newBalance = balance + charge - credit;
        if (newBalance > limit)
        {   
            printf("Credit Limit Exceeded\n\n");
            printf("Account:\t%d\n", account);
            printf("Credits limit:\t%f\n", limit);
            printf("Balance:\t%f\n\n", newBalance);
        }
    }

    return 0;
}