#include<stdio.h>

void mystrncpy(char dest[], char src[], int n)
{
	int i=0;
	
	for(i=0;i<n && src[i]!='\0';i++)
	{
		dest[i]=src[i];
	}
	dest[i]!='\0';
}

int main()
{
	char str1[50],str2[50];
	int n;
	
	printf("enter source string:");
	gets(str1);
	
	printf("enter numbers of characters to copied:");
	scanf("%d",&n);
	
	mystrncpy(str2,str1,n);
	
	printf("copied string = %s",str2);
	
	return 0;
}