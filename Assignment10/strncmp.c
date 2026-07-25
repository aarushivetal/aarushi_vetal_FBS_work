#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "Hello";
    char str2[] = "Heloo";

    printf("%d", strncmp(str1, str2, 3));
}