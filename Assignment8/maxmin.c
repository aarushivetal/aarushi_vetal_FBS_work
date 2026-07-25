void main()
{
	int arr[5],max,min,i;
	
	printf("enter 5 elements:");
	
	for(i = 0;i < 5;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	 min = max = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum Number = %d\n", min);
    printf("Maximum Number = %d\n", max);
}