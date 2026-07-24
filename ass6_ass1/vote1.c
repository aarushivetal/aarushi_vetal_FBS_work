#include<stdio.h>
void checkVote()
{
	int age;
	
	printf("enter a age:");
	scanf("%d",&age);
	
	if(age >= 18)
		printf("eligible to vote");
	else
        printf("Not Eligible to Vote");
}

void main()
{
	checkVote();
}