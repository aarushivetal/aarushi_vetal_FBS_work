void main()
{
    int n = 12345,first,last;

    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }

    first = n;

    printf("%d", first + last);
}