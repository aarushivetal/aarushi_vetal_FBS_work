#include<stdio.h>
#include<string.h>

void main()
{
    char fname[20], lname[20];

    printf("Enter First Name: ");
    gets(fname);

    printf("Enter Last Name: ");
    gets(lname);

    strcat(fname, " ");
    strcat(fname, lname);

    printf("Full Name = %s", fname);
}