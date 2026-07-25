#include<string.h>

void main()
{
    char str1[20] = "Hello";
    char str2[] = "World";

    strncat(str1, str2, 3);

    printf("%s", str1);
}