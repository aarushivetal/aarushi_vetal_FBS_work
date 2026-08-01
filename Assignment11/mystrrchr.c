#include<stdio.h>

int mystrrchr(char str[], char ch)
{
    int i = 0, pos = -1;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            pos = i;
        }
        i++;
    }

    return pos;
}

int main()
{
    char str[50], ch;
    int pos;

    printf("Enter String: ");
    gets(str);

    printf("Enter Character: ");
    scanf(" %c", &ch);

    pos = mystrrchr(str, ch);

    if(pos != -1)
        printf("Last Occurrence Found at Position %d", pos);
    else
        printf("Character Not Found");

    return 0;
}