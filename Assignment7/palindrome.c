#include<stdio.h>

void palindrome(int *p)
{
    int rev = 0, rem, temp;

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

void main()
{
    int no;

    printf("Enter a 3 digit number: ");
    scanf("%d", &no);

    palindrome(&no);
}