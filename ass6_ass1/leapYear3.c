#include<stdio.h>
int leapYear()
{
	int year;
	
	printf("enter year:");
	scanf("%d",&year);
	
	if((year%400==0) || (year%4==0 && year%100!=0))
		return 1;
	else
		return 0;
}

void main()
{
	int result;
	
	result=leapYear();
	
	if(result==1)
		printf("leap year");
	else
		printf("not a leap year");
}