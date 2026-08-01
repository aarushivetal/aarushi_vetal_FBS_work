#include<stdio.h>

int mystrncasecmp(char str1[], char str2[], int n)
{
    int i;
    char ch1, ch2;

    for(i = 0; i < n; i++)
    {
        ch1 = str1[i];
        ch2 = str2[i];

        if(ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;

        if(ch2 >= 'A' && ch2 <= 'Z')
            ch2 = ch2 + 32;

        if(ch1 != ch2)
            return ch1 - ch2;

        if(ch1 == '\0' || ch2 == '\0')
            break;
    }

    return 0;
}

int main()
{
    char str1[50], str2[50];
    int n, result;

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    printf("Enter Number of Characters to Compare: ");
    scanf("%d", &n);

    result = mystrncasecmp(str1, str2, n);

    if(result == 0)
        printf("First %d characters are Equal", n);
    else
        printf("First %d characters are Not Equal", n);

    return 0;
}