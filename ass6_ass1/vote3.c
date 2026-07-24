#include<stdio.h>

int checkVote()
{
	int age;
	
	printf("enter age:");
	scanf("%d",&age);
	
	if(age >= 18)
		return 1;
	else
        return 0;
}

void main()
{
	int result;
	
	result=checkVote();
	
	if(result==1)
		printf("eligible");
	else
		printf("not eligible");
}