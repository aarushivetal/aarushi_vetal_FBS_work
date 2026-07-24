int palindrome()
{
    int no, temp, rem, rev = 0;

    printf("Enter a 3 digit number: ");
    scanf("%d", &no);

    temp = no;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == no)
        return 1;
    else
        return 0;
}

void main()
{
    int result;

    result = palindrome();

    if(result == 1)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
}