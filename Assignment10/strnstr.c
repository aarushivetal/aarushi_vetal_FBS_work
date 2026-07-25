#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "Welcome to Pune";

    if(strnstr(str, "Pune", 15))
        printf("Found");
    else
        printf("Not Found");
}