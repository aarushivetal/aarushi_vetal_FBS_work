#include <stdio.h>

void main()
{
    prime();
}

void prime()
{
    int no, i, flag = 1;

    printf("Enter Number: ");
    scanf("%d", &no);

    if(no <= 1)
    {
        printf("Not Prime");
        return;
    }

    for(i = 2; i < no; i++)
    {
        if(no % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}

