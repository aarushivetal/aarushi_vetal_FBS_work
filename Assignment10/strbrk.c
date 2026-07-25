#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "Programming";

    printf("%s", strpbrk(str, "aeiou"));
}