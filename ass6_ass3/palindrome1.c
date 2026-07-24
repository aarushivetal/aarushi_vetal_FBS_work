#include<stdio.h>

void main()
{
	palindrome();
}

void palindrome()
{
	int no,temp,rem,rev=0;
	
	printf("enter number:");
	scanf("%d",&no);
	
	temp=no;
	
	while(temp>0)
	{
		rem = temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	
	if(rev==no)
		printf("palindrome");
	else
		printf("not palindrome");
}