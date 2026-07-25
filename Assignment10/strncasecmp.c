#include<string.h>

void main()
{
    char str1[] = "Programming";
    char str2[] = "PROGRAM";

    if(strncasecmp(str1, str2, 7) == 0)
        printf("First 7 characters are Equal");
    else
        printf("Not Equal");
}