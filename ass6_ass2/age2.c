#include<stdio.h>

void checkAge(int age)
{
	if(age < 12)
		printf("child");
	else if(age <= 19)
		printf("teenager");
	else if(age <= 59)
		printf("Adult");
	else
		("senior");
}

void main()
{
	int age;
	
	printf("enter age:");
	scanf("%d",&age);
	
	checkAge(age);
}