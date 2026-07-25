#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "Hello";
    char str2[20];

    strncpy(str2, str1, 3);
    str2[3] = '\0';

    printf("%s", str2);
}