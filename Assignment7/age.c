#include<stdio.h>

void vote(int *p)
{
    if(*p >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");
}

void main()
{
    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    vote(&age);
}