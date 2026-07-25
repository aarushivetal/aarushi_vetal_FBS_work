void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    armstrong(&no);
}

void armstrong(int *p)
{
    int temp, rem, sum = 0;

    temp = *p;

    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if(sum == *p)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
}