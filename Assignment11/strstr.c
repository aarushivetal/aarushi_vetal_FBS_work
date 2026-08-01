#include<stdio.h>

int mystrstr(char str[], char sub[])
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i+j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
        {
            return i;   // substring found
        }
    }

    return -1;   // substring not found
}

int main()
{
    char str[50], sub[50];
    int pos;

    printf("Enter Main String: ");
    gets(str);

    printf("Enter Sub String: ");
    gets(sub);

    pos = mystrstr(str, sub);

    if(pos != -1)
        printf("Substring Found at Position %d", pos);
    else
        printf("Substring Not Found");

    return 0;
}