void main()
{
	int no=121;
	int first,last;
	
	first = no/100;
	last = no%10;
	
	if(first==last)
		printf("palindrome");
	else
		printf("not palindrome");	
}