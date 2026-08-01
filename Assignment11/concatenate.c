#include<stdio.h>

void mystrcat(char str1[], char str2[])
{
	int i=0, j=0;
	
	while(str1[i]!='\0')
	{
		i++;
	}
	
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	
	str1[i]!='\0';
}

void main()
{
	char str1[50],str2[50];
	
	printf("enter first string:");
	gets(str1);
	
	printf("enter second string:");
	gets(str2);
	
	mystrcat(str1,str2);
	
	printf("concatenate string = %s",str1);
	
	return 0;
}