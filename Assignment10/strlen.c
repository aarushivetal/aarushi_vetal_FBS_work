#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];

    printf("Enter String: ");
    gets(str);

    printf("Length = %d", strlen(str));
}