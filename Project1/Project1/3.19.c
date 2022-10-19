#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int principal, days;
    float rate, interest;

    while (1)
    {
        printf("Enter loan principal (-1 to end): ");
        scanf_s("%d", &principal);
        if (principal == -1)
            return 0;
        printf("Enter interest rate: ");
        scanf_s("%f", &rate);
        printf("Enter term of the loan in days: ");
        scanf_s("%d", &days);
        interest = principal * rate * days / 365;
        printf("The interest charge is: %f", interest);
        printf("\n\n");

        return 0;
    }
}