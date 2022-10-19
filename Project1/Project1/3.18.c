#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sale;
    float salary;

    while (1)
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf_s("%d", &sale);
        if (sale == -1)
            return 0;
        salary = 200 + sale * 0.09;
        printf("Salary is: %f", salary);
        printf("\n\n");
    }

    return 0;
}