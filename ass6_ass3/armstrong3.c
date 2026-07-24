#include<stdio.h>

int armstrong()
{
	int no,rem,temp,sum=0;
	
	printf("enter number:");
	scanf("%d",&no);
	
	temp=no;
	
	while(temp>0)
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
	int result;
	
	result = armstrong();
	
	if(result==1)
		printf("armstrong");
	else
		printf("not armstrong");
}