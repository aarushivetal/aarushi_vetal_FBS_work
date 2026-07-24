#include<stdio.h>

int checkAge()
{
	int age;
	
	printf("enter age:");
	scanf("%d",&age);
	
	if(age < 12)
		return 1;
	else if(age <= 19)
		return 2;
	else if(age <= 59)
		return 3;
	else
		4;
}

void main()
{
	int result;
	
	result=checkAge();
	
	if(result==1)
		printf("child");
	else if(result==2)
		printf("teenager");
	else if(result==3)
		printf("Adult");
	else
		("senior");
}