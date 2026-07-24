#include <stdio.h>

int armstrong(int no)
{
    int temp, rem, sum = 0;

    temp = no;

    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if(sum == no)
        return 1;
    else
        return 0;
}

void main()
{
    int no, result;

    printf("Enter Number: ");
    scanf("%d", &no);

    result = armstrong(no);

    if(result == 1)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
}