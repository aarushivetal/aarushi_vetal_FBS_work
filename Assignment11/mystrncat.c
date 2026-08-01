#include<stdio.h>

void mystrncat(char str1[], char str2[], int n)
{
    int i = 0, j = 0;

    while(str1[i] != '\0')
    {
        i++;
    }

    while(str2[j] != '\0' && j < n)
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main()
{
    char str1[50], str2[50];
    int n;

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    printf("Enter Number of Characters to Append: ");
    scanf("%d", &n);

    mystrncat(str1, str2, n);

    printf("Result String = %s", str1);

    return 0;
}