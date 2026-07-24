int perfect(int no)
{
    int i, sum = 0;

    for(i = 1; i < no; i++)
    {
        if(no % i == 0)
            sum = sum + i;
    }

    if(sum == no)
        return 1;
    else
        return 0;
}

void main()
{
    int no, result;

    printf("Enter Number: ");
    scanf("%d", &no);

    result = perfect(no);

    if(result == 1)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}