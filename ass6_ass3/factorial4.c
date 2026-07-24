#include <stdio.h>

int factorial(int no)
{
    int i, fact = 1;

    for(i = 1; i <= no; i++)
    {
        fact = fact * i;
    }

    return fact;
}

void main()
{
    int no, result;

    printf("Enter Number: ");
    scanf("%d", &no);

    result = factorial(no);

    printf("Factorial = %d", result);
}