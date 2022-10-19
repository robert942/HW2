#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hours;
    float rate, salary;

    while (1)
    {
        printf("Enter # of hours worked (-1 to end): ");
        scanf_s("%d", &hours);
        if (hours == -1)
            return 0;
        printf("Enter hourly rates of the worker ($00.00): ");
        scanf_s("%f", &rate);
        if (hours <= 40)
            salary = hours * rate;
        else
            salary = (40 + 1.5 * (hours - 40)) * rate;
        printf("Salary is: %f\n\n", &salary);

        return 0;
    }
}