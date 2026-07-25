void main()
{
	int no;
	
	printf("enter number:");
	scanf("%d",&no);
	
	strongRange(&no);
}

void strongRange(int *no)
{
	int i,j,temp,rem,fact,sum;
	
	for(i=1;i<=*no;i++)
	{
		temp=*no;
		sum=0;
		
		while(temp>0)
		{
			rem = temp % 10;

            fact = 1;
            for(j = 1; j <= rem; j++)
            {
            	fact=fact*i;
			}
			sum = sum + fact;
            temp = temp / 10;
		}
		if(sum == i)
            printf("%d ", i);
	}
}