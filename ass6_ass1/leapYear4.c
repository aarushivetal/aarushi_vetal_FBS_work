#include<stdio.h>
int leapYear(int year)
{
	if((year%400==0) || (year%4==0 && year%100!=0))
		return 1;
	else
		return 0;
}

void main()
{
	int year,result;
	
	printf("enter a year:");
	scanf("%d",&year);
	
	result = leapYear(year);

    if(result == 1)
        printf("Leap Year");
    else
        printf("Not a Leap Year");
	
	
}