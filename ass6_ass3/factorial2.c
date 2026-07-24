#include <stdio.h>

void factorial(int no)
{
    int i, fact = 1;

    for(i = 1; i <= no; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}

void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    factorial(no);
}