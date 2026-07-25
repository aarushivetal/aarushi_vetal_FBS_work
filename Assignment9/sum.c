void sumArray(int *p, int size)
void main()
{
	int arr[5],i;
	
	printf("enter 5 elements:");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sumArray(arr,5);
}

void sumArray(int *p, int size)
{
	int i,sum=0;
	
	for(i=0;i<size;i++)
	{
		sum = sum + *(p + i);
	}
	
	printf("Sum = %d", sum);
}