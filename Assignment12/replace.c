#include<stdio.h>

int main()
{
	char str[50],temp;
	int len=0;
	
	printf("enter string:");
	gets(str);
	
	while(str[len]!='\0')
	{
		len++;
	}
	
	temp=str[0];
	str[0]=str[len-1];
	str[len - 1] = temp;
	
	printf("New String = %s", str);

    return 0;
	
}