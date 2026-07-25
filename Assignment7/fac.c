#include<stdio.h>
void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    factorial(&no);
}

void factorial(int *p)
{
    int i, fact = 1;

    for(i = 1; i <= *p; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}

