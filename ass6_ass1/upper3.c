#include <stdio.h>

int checkCase()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
}

void main()
{
    int result;

    result = checkCase();

    if(result == 1)
        printf("Uppercase");
    else
        printf("Lowercase");
}