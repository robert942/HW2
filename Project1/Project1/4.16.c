#include <stdio.h>
#include <stdlib.h>

int i, j, k;

int main(void)
{
    printf("(A)\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\n(B)\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 10; j >= i; j--)
            printf("*");
        printf("\n");
    }

    printf("\n(C)\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i - 1; j++)
            printf(" ");
        for (k = 10; k >= i; k--)
            printf("*");
        printf("\n");
    }

    printf("\n(D)\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 10; j >= i + 1; j--)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("*");
        printf("\n");
    }

    system("pause");
    return 0;
}