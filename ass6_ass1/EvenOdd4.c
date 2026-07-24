int checkEvenOdd(int no)
{
    if(no % 2 == 0)
        return 1;
    else
        return 0;
}

void main()
{
	int no, result;

    printf("Enter a number: ");
    scanf("%d", &no);

    result = checkEvenOdd(no);

    if(result == 1)
        printf("Even");
    else
        printf("Odd");
}
