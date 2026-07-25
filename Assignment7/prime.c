void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    prime(&no);
}

void prime(int *p)
{
    int i, flag = 0;

    for(i = 2; i < *p; i++)
    {
        if(*p % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}