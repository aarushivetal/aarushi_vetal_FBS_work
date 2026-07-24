#include<stdio.h>

int checkVote(int age)
{
	if(age >= 18)
        return 1;
    else
        return 0;
}

void main()
{
	int age,result;
	
	printf("enter age:");
	scanf("%d",&age);
	
	result=checkVote(age);
	
	if(result==1)
		printf("Eligible to Vote");
    else
        printf("Not Eligible to Vote");
	
	
}