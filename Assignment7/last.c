void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    sumFirstLast(&no);
}

void sumFirstLast(int *p)
{
    int temp, first, last;

    temp = *p;

    last = temp % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
    }

    first = temp;

    printf("Sum = %d", first + last);
}
