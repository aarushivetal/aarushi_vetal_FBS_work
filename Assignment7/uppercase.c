void checkCase(char *p)
{
    if(*p >= 'A' && *p <= 'Z')
        printf("Uppercase Character");
    else if(*p >= 'a' && *p <= 'z')
        printf("Lowercase Character");
    else
        printf("Not an Alphabet");
}

void main()
{
    char ch;

    printf("Enter Character: ");
    scanf(" %c", &ch);

    checkCase(&ch);
}