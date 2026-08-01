#include<stdio.h>

void mystrrev(char str[])
{
	int i,len=0;
	char temp;
	
	while(str[len]!='\0')
	{
		len++;
	}
	
	for(i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i] = str[len-1-i];
        str[len-1-i] = temp;
	}
}

int main()
{
    char str[50];

    printf("Enter String: ");
    gets(str);

    mystrrev(str);

    printf("Reversed String = %s", str);

    return 0;
}