#include<stdio.h>

void main()
{
	char str1[]="hello";
	char str2[]="HELLO";
	
	if(strcasecmp(str1, str2) == 0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");
}