void main()
{
	int no;
	
	printf("enter numbers:");
	scanf("%d",&no);
	
	perfectRange(&no);
}

void perfectRange(int *no)
{
	int i,j,sum;
	
	for(i=;1i<=*no;i++)
	{
		sum=0;
		
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				sum = sum+j;
		}
		
		if(sum == i)
            printf("%d ", i);
	}
}