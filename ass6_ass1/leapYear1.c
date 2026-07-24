void leapYear()
{
	int year;
	
	printf("enter a year");
	scanf("%d",&year);
	
	if((year%400==0) || (year%4==0 && year%100!=0))
		printf("leap year");
	else
		printf("not a leap year");
}

void main()
{
    leapYear();
}