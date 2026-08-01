#include<stdio.h>

int main()
{
	char str1[50],str2[50];
	int len1=0, len2=0,i;
	
	printf("enter first string:");
	gets(str1);
	
	printf("enter second string:");
	gets(str2);
	
	for(i=0;str1[i]!='\0';i++)
	{
		len1++;
	}
	
	for(i=0;str2[i]!='\0';i++)
	{
		len2++;
	}
	
	if(len1 > len2)
        printf("Larger String = %s", str1);
    else if(len2 > len1)
        printf("Larger String = %s", str2);
    else
        printf("Both Strings have Equal Length");

    return 0;
}