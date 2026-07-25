void evenOdd(int *p, int size)
void main()
{
	int arr[5],i;
	
	printf("Enter 5 elements:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	evenOdd(arr,5);
}

void evenOdd(int *p, int size)
{
	int i;

    printf("Even Numbers: ");

    for(i = 0; i < size; i++)
    {
        if(*(p + i) % 2 == 0)
            printf("%d ", *(p + i));
    }

    printf("\nOdd Numbers: ");

    for(i = 0; i < size; i++)
    {
        if(*(p + i) % 2 != 0)
            printf("%d ", *(p + i));
    }
}