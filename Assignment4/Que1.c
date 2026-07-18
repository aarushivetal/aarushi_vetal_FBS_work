void main()
{
	int n,num=1,temp,sum,rem,digits;

	printf("Enter n: ");
    scanf("%d", &n);

	for(num = 1; num <= n; num++)
	{
		temp = num;
		sum = 0;      
        digits=0;
        
		while(temp>0)
		{
			digits++;
            temp = temp / 10;
		}
		
		temp=num;
		
		while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem*rem*rem;
            temp = temp / 10;
        }
        
        if(sum == num)
        {
            printf("%d ", num);
        }  
	}
}