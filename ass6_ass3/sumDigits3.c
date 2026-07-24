#include <stdio.h>

void main()
{
    int result;

    result = sumDigits();

    printf("Sum = %d", result);
}

int sumDigits()
{
    int no, first, last, temp;

    printf("Enter Number: ");
    scanf("%d", &no);

    last = no % 10;

    temp = no;
    while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;

    return first + last;
}

