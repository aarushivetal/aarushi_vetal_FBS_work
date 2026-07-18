#include <stdio.h>

void main()
{
    int num, choice, i, rem, rev, sum = 0, temp, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu");
    printf("\n1. Check Even or Odd");
    printf("\n2. Check Prime or Not");
    printf("\n3. Check Palindrome or Not");
    printf("\n4. Check Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Find Sum of Digits");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(num % 2 == 0)
                printf("Number is Even");
            else
                printf("Number is Odd");
            break;

        case 2:
            if(num <= 1)
                printf("Not Prime");
            else
            {
                for(i = 2; i <= num/2; i++)
                {
                    if(num % i == 0)
                    {
                        flag = 0;
                        break;
                    }
                }

                if(flag == 1)
                    printf("Prime Number");
                else
                    printf("Not Prime Number");
            }
            break;

        case 3:
            temp = num;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            if(rev == num)
                printf("Palindrome Number");
            else
                printf("Not Palindrome Number");
            break;

        case 4:
            if(num > 0)
                printf("Positive Number");
            else if(num < 0)
                printf("Negative Number");
            else
                printf("Zero");
            break;

        case 5:
            temp = num;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse Number = %d", rev);
            break;

        case 6:
            temp = num;
            sum = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            printf("Sum of Digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }
}