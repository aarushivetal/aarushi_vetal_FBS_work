#include<stdio.h>
#include<string.h>

void main()
{
    char name[20];
    char copy[20];

    printf("Enter Name: ");
    gets(name);

    strcpy(copy, name);

    printf("Copied String = %s", copy);
}