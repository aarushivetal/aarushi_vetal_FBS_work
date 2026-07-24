int perfect()
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
        return 1;
    else
       return 0;
}

void main()
{
	int result;
	
	result = perfect();
	
	if(result == 1)
		printf("perfect");
	else
		printf("not perfect");
}