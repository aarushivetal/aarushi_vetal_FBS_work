#include<stdio.h>

int strong(int no)
{
	int i,rem,temp,sum=0,fact;
	
	temp=no;
	
	while(temp>0)
	{
		rem= temp%10;
		
		fact=1;
		for(i=0;i<=rem;i++)
		{
			fact=fact*i;
		}
		
		sum = sum + fact;
		temp= temp/10;
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

    result = strong(no);

    if(result == 1)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}