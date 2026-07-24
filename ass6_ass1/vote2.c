#include <stdio.h>

void checkVote(int age)
{
    if(age >= 18)
        printf("Eligible to Vote");
    else
        printf("Not Eligible to Vote");
}

void main()
{
	int age;
	
	printf("enter a age:");
	scanf("%d",&age);
	
	checkVote(age);
}