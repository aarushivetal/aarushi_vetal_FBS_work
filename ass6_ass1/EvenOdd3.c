int checkEvenOdd()
{
	int no;
	
	printf("enter a number");
	scanf("%d",&no);
	
	if(no%2==0)
		return 1;
    else
        return 0;
}

void main()
{
	int result;
	
	result=checkEvenOdd();
	
	if(result==1)
		printf("even");
	else
		printf("odd");
}
