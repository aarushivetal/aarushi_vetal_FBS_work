#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "Pune123";

    printf("Count = %d", strcspn(str, "0123456789"));
}