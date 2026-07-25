void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    perfect(&no);
}

void perfect(int *p)
{
    int i, sum = 0;

    for(i = 1; i < *p; i++)
    {
        if(*p % i == 0)
            sum = sum + i;
    }

    if(sum == *p)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}