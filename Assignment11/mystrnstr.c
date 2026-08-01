#include<stdio.h>

int mystrnstr(char str[], char sub[], int n)
{
	int i,j;
	
	for(i = 0; i < n && str[i] != '\0'; i++)
	{
		j=0;
		
		while(sub[j]!='\0' && 
			str[i + j] == sub[j] &&
			(i + j) < n)    
			{
			 	j++;
			} 
			
		if(sub[j] == '\0')
        {
            return i;
        }
	}
	
	return -1;
}

int main()
{
	char str[50],sub[50];
	int n,pos;
	
	printf("Enter Main String: ");
    gets(str);

    printf("Enter Sub String: ");
    gets(sub);

    printf("Enter Number of Characters: ");
    scanf("%d", &n);
    
    pos = mystrnstr(str, sub, n);

    if(pos != -1)
        printf("Substring Found at Position %d", pos);
    else
        printf("Substring Not Found");

    return 0;
}