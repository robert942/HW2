#include <stdio.h>
#include <math.h>

int main() 
{
    float priciple = 5000;
    float CI; //Compound Interest
    float amount;

    printf("interest = 10.0%%\n");
    for (int year = 1; year <= 15; year++)
    {
        amount = priciple * (pow((1 + 0.01), year));
        CI = amount - priciple;
    }
    printf("Compound interest is %.2f :\n", CI);

    printf("interest = 10.5%%\n");
    for (int year = 1; year <= 15; year++)
    {
        amount = priciple * (pow((1 + 0.0105), year));
        CI = amount - priciple;
    }
    printf("Compound interest is %.2f :\n", CI);

    printf("interest = 11.0%%\n");
    for (int year = 1; year <= 15; year++)
    {
        amount = priciple * (pow((1 + 0.011), year));
        CI = amount - priciple;
    }
    printf("Compound interest is %.2f :\n", CI);

    printf("interest = 11.5%%\n");
    for (int year = 1; year <= 15; year++)
    {
        amount = priciple * (pow((1 + 0.0115), year));
        CI = amount - priciple;
    }
    printf("Compound interest is %.2f :\n", CI);

    printf("interest = 12.0%%\n");
    for (int year = 1; year <= 15; year++)
    {
        amount = priciple * (pow((1 + 0.012), year));
        CI = amount - priciple;
    }
    printf("Compound interest is %.2f :\n", CI);
    return 0;
}