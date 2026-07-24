
void perfect(int no)
{
	 int i, sum = 0;

    for(i = 1; i < no; i++)
    {
        if(no % i == 0)
            sum = sum + i;
    }

    if(sum == no)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}

void main()
{
	int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    perfect(no);
}