void main()
{
    strongRange();
}

void strongRange()
{
	int no,i,j, temp, rem, sum, fact;
	
	printf("enter no:");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		temp=no;
		sum=0;
		
		while(temp>0)
		{
			rem = temp % 10;

            fact = 1;
             for(j = 1; j <= rem; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;
            temp = temp / 10;
		}
		 if(sum == i)
        {
            printf("%d ", i);
        }
	}
}