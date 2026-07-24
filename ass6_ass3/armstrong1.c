void main()
{
    armstrong();
}

void armstrong()
{
	int no,rem,temp,sum=0;
	
	printf("enter number:");
	scanf("%d",&no);
	
	temp=no;
	
	while(temp>0)
	{
		rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
	}
	
	if(sum == no)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
	
}