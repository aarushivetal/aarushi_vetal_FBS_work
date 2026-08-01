#include<stdio.h>

void mystrupper(char str[])
{
	int i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		i++;
	}
}

int main()
{
	char str[50];
	
	printf("enter string:");
	gets(str);
	
	mystrupper(str);
	
	printf("Uppercase String = %s", str);

    return 0;
}