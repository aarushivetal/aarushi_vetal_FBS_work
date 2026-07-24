#include <stdio.h>

int factorial()
{
    int no, i, fact = 1;

    printf("Enter Number: ");
    scanf("%d", &no);

    for(i = 1; i <= no; i++)
    {
        fact = fact * i;
    }

    return fact;
}

void main()
{
    int result;

    result = factorial();

    printf("Factorial = %d", result);
}