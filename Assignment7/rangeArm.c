void main()
{
	int no;
	
	printf("enter number:");
	scanf("%d",&no);
	
	armstrongRange(&no);
}

void armstrongRange(int *no)
{
	int rem,temp,i,sum;
	
	for(i=0;i<=*no;i++)
	{
		temp=*no;
		sum=0;
		
		while(temp>0)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
		}
		
		if(sum == i)
            printf("%d ", i);
	}
	
}