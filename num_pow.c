#include <stdio.h>
#include <stdlib.h>

int main()
{
    //raising a number to the power of a number
    float num = 0;
    int exp = 0;

    printf("\nEnter your base number: ");
    scanf("%f", &num);

    printf("\nEnter your exponent number: ");
    scanf("%d", &exp);

    printf("\n\nYour inputs are %f for the base number, and %d as the exponent.", num, exp);
    printf("\n\n\t%f^%d = ", num, exp);
    printf("%f", pow(num, exp));
    return 0;
}
