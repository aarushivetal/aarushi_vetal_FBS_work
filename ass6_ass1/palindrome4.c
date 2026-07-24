#include<stdio.h>
int palindrome(int no)
{
    int temp, rem, rev = 0;

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
    int no, result;

    printf("Enter a 3 digit number: ");
    scanf("%d", &no);

    result = palindrome(no);

    if(result == 1)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
}