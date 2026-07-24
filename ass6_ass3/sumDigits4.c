void main()
{
    int no, result;

    printf("Enter Number: ");
    scanf("%d", &no);

    result = sumDigits(no);

    printf("Sum = %d", result);
}

int sumDigits(int no)
{
    int first, last, temp;

    last = no % 10;

    temp = no;
    while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;

    return first + last;
}