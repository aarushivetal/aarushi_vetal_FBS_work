void main()
{
	int n=153,temp=n,rem,sum=0;
	
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
	if(sum==n)
		printf("Armstrong");
	else
		printf("not armstrong");
}