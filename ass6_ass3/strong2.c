#include <stdio.h>

void strong(int no)
{
    int temp, rem, sum = 0, i, fact;

    temp = no;

    while(temp > 0)
    {
        rem = temp % 10;

        fact = 1;
        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == no)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}

void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    strong(no);
}