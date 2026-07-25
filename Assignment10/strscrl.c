#include<stdio.h>
#include<string.h>

void main()
{
    char n1[] = "Aarushi";
    char n2[] = "Aarushi";

    if(strcoll(n1, n2) == 0)
        printf("Names are Same");
    else
        printf("Names are Different");
}