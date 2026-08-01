#include<stdio.h>

int main()
{
	char str[50];
	int n,i;
	
	printf("Enter String: ");
    gets(str);

    printf("Enter Index to Remove: ");
    scanf("%d", &n);
    
    for(i = n; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }

    printf("Modified String = %s", str);

    return 0;

}