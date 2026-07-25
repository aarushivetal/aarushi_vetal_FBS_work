#include<stdio.h>
#include<string.h>

void main()
{
    char pass1[20], pass2[20];

    printf("Enter Password: ");
    gets(pass1);

    printf("Re-enter Password: ");
    gets(pass2);

    if(strcmp(pass1, pass2) == 0)
        printf("Password Matched");
    else
        printf("Password Not Matched");
}