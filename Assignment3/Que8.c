void main()
{
	int n=145,temp,rem,fact,i,sum=0;
	
	temp = n;

    while(temp>0)
    {
    	rem=temp%10;
    	fact=1;
    	i=1;
	
	while(i<=rem)
	{
		fact = fact * i;
            i++;
	}
	
	 sum = sum + fact;
     temp = temp / 10;
    }
    if(sum == n)
        printf("Strong");
    else
        printf("Not Strong");
}