#include<stdio.h>

void palindrome(int no)
{
	int rem,temp,rev=0;
	
	temp=no;
	
	while(temp>0)
	{
		rem = temp%10;
		rev= rev*10+rem;
		temp=temp/10;
	}
	
	if(rev==no)
		printf("palindrome");
	else
		printf("not palindrome");
}

void main()
{
	int no;
	
	printf("enter number:");
	scanf("%d",&no);
	
	palindrome(no);
}