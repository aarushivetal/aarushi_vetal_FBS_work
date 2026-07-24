#include <stdio.h>

int checkCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
}

void main()
{
    char ch;
    int result;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = checkCase(ch);

    if(result == 1)
        printf("Uppercase");
    else
        printf("Lowercase");
}