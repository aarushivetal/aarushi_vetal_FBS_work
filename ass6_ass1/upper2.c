#include <stdio.h>

void checkCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else
        printf("Lowercase");
}

void main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    checkCase(ch);
}