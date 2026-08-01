#include<stdio.h>

int mystrchr(char str[],char ch)
{
	int i=0;
	
	while(str[i]!='\0')
	{
	if(str[i] == ch)
        {
            return i;   
        }
        i++;
	}
	
	return -1;	
}

int main()
{
	char str[50],ch;
	int pos;
	
	printf("Enter String: ");
    gets(str);

    printf("Enter Character: ");
    scanf("%c", &ch);

    pos = mystrchr(str, ch);

    if(pos != -1)
        printf("Character Found at Position %d", pos);
    else
        printf("Character Not Found");

    return 0;
}