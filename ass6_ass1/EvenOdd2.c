void checkEvenOdd(int no)
{
	if(no % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
	
void main()
{
	int no;
	
	printf("Enter Number");
	scanf("%d",&no);
	
	checkEvenOdd(no);	
}
	
	
	
	
