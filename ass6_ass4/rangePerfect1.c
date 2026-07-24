void main()
{
    perfectRange();
}

void perfectRange()
{
	int n,i,j,sum;
	
	printf("enter n:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		sum=0;
		
		for(j=0;j<i;j++)
		{
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }
        
         if(sum == i)
        {
            printf("%d ", i);
        }
	}
}