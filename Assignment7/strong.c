#include<stdio.h>
void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    strong(&no);
}

void strong(int *p)
{
    int temp, rem, sum = 0, fact, i;

    temp = *p;

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

    if(sum == *p)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}

