#include<stdio.h>

void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    prime(no);
}

void prime(int no)
{
	int i, flag=1;
	
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