#include<stdio.h>
void mystrcpy(char dest[],char src[])
{
	int i=0;
	
	while(src[i]!='\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]!='/0';
}

void main()
{
	char str1[20],str2[20];
	
	printf("enter string:");
	gets(str1);
	
	mystrcpy(str2,str1);
	
	printf("copied string: %s",str2);
}