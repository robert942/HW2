#include <stdio.h>
#include <stdlib.h>

int a, b, c;

int main(void)
{
    for (c = 1; c <= 500; c++)
        for (a = 1; a < c; a++)
            for (b = 1; b < a; b++)
                if (a * a + b * b == c * c)
                    printf("%d ^ 2 + %d ^ 2 = %d ^ 2\n", a, b, c);

    system("pause");
    return 0;
}