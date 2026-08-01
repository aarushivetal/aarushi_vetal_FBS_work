#include<stdio.h>

int mystrcasecmp(char str1[], char str2[])
{
	int i=0;
	char ch1,ch2;
	
	while(str1[i] != '\0' && str2[i] != '\0')
	{
		ch1=str1[i];
		ch2=str2[i];
		
		if(ch1>='A' && ch1<='A')
			ch1=ch1+32;
			
		if(ch2>='A' && ch2<='A')
			ch2=ch2+32;
			
		if(ch1!=ch2)
			return ch1-ch2;
			
		i++;
	}
	
	 return str1[i] - str2[i];
}

int main()
{
	char str1[50],str2[50];
	int result;
	
	printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    result = mystrcasecmp(str1, str2);

    if(result == 0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}

