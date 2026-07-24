void main()
{
    perfect();
}

void perfect()
{
	int no,i,sum=0;
	
	printf("enter number:");
	scanf("%d",&no);
	
	for(i = 1; i < no; i++)
    {
        if(no % i == 0)
            sum = sum + i;
    }

    if(sum == no)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}