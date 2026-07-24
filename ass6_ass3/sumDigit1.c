#include<stdio.h>

void main()
{
	sumDigits();
}

void sumDigits()
{
	int no,last,first,temp;
	
	printf("enter no:");
	scanf("%d",&no);
	
	last = no % 10;
	
	temp=no;
	
	while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;
    
    printf("Sum = %d", first + last);	
}