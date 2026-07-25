void main()
{
	int arr[5],num,i,found=0;
	
	printf("Enter 5 elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);	
	}
	
	printf("Enter number to search: ");
    scanf("%d", &num);
    
    for(i = 0; i < 5; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            printf("Number found at position %d", i + 1);
            break;
        }
    }

    if(found == 0)
    {
        printf("Number not found");
    }
}