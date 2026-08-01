#include<stdio.h>

int mystrcmp(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }

    return str1[i] - str2[i];
}

void main()
{
    char str1[50], str2[50];
    int result;

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    result = mystrcmp(str1, str2);

    if(result == 0)
        printf("Both strings are Equal.");
    else
        printf("Both strings are Not Equal.");
}