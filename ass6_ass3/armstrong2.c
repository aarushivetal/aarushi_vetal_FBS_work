#include<stdio.h>

void armstrong(int no)
{
	 int temp, rem, sum = 0;

    temp = no;
    
	while(temp>0)
	{
		rem=temp%no;
		sum= sum + (sum * sum * sum);
		temp=rem%10;
	}
	
	if(sum==no)
		printf("armstrong");
	else
		printf("not armstrong");
}

void main()
{
	int no;
	
	printf("enter number:");
	scanf("%d",&no);
	
	armstrong(no);
	
	
}