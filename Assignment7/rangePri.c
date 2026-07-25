void main()
{
	int no;
	
	printf("enter number:");
	scanf("%d",&no);
	
	primeRange(&no);
}

void primeRange(int *no)
{
	int i,j,flag=0;
	
	for(i=2;i<=*no;i++)
	{
		flag = 0;
		
		for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%d ", i);
    }
		
}
