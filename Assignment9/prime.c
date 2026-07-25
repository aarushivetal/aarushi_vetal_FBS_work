void prime(int *p, int size);

void main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    prime(arr, 5);
}

void prime(int *p, int size);
{
	int i,j,count;
	
	printf("prime numbers are:");
	
	for(i=0;i<size;i++)
	{
		count=0;
		
		for(j=0;j<=*(p+i);j++)
		{
			if(*(p + i) % j == 0)
                count++;
		}
		
		if(count == 2)
            printf("%d ", *(p + i));
	}
}