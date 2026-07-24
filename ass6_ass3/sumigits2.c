#include <stdio.h>

void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    sumDigits(no);
}

void sumDigits(int no)
{
    int first, last, temp;

    last = no % 10;

    temp = no;
    while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;

    printf("Sum = %d", first + last);
}