void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    palindrome(&no);
}

void palindrome(int *p)
{
    int temp, rem, rev = 0;

    temp = *p;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == *p)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");
}
