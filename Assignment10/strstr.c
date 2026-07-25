#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "Welcome to Pune";

    if(strstr(str, "Pune"))
        printf("Found");
    else
        printf("Not Found");
}