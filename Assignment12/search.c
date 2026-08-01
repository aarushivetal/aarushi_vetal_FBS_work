#include<stdio.h>

int main()
{
	char str[50],ch;
	int i,flag=0;
	
	printf("Enter String: ");
    gets(str);

    printf("Enter Character: ");
    scanf("%c", &ch);
    
    for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]==ch)
    	{
    		flag=1;
    		break;
		}
	}
	
	if(flag == 1)
        printf("Character Found at Position %d", i);
    else
        printf("Character Not Found");

    return 0;
}