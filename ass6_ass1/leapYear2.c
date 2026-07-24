void leapYear(int year)
{
	if((year%400==0) || (year%4==0 && year%100!=0))
		printf("leap year");
	else
		printf("not a leap year");
}

void main()
{
	int year;

    printf("Enter year: ");
    scanf("%d", &year);

    leapYear(year);
}