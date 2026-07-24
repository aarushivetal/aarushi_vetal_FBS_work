void main()
{
    factorial();
}

void factorial()
{
    int no, i, fact = 1;

    printf("Enter Number: ");
    scanf("%d", &no);

    for(i = 1; i <= no; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}

