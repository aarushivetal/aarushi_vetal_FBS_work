void main()
{
	int no;
	
	printf("enter no:");
	scanf("%d",&no);
	
	strongRange(no);
}

void strongRange(int no)
{
	int i,j,fact,sum,temp,rem;
	
	for(i=1;i<=no;i++)
	{
		temp=no;
		sum=0;
		
		while(temp>0)
		{
			rem=temp%10;
			fact=1;
			for(j=1;j<i;j++)
			{
				fact=fact*j;
			}
			
			sum=sum+fact;
			temp=temp/10;
		}
		
		if(sum == i)
        {
            printf("%d ", i);
        }
	}
}
