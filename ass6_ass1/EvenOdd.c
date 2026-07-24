void checkEvenOdd()
{
	int no;
	
	printf("enter a number");
	scanf("%d",&no);
	
	if(no%2==0)
		printf("Even");
    else
        printf("Odd");
}

void main()
{
    checkEvenOdd();
}