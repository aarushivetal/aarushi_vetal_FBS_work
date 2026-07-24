#include <stdio.h>

void checkCase()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else
        printf("Lowercase");
}

void main()
{
    checkCase();
}