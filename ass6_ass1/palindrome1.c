void palindrome()
{
	int no, temp, rem, rev=0;
	temp=no;
	
	printf("enter a 3 digit number");
	scanf("%d",&no);
	
	while(temp>0)
	{
		rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
	}
	
	if(rev == no)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
}

void main()
{
	palindrome();
}