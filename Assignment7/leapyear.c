void leapYear(int *p)
{
	if((*p % 400 == 0) || (*p % 4 == 0 && *p % 100 != 0))
		printf("Leap Year");
    else
        printf("Not Leap Year");
}

void main()
{
	int year;
	
	printf("enter year:");
	scanf("%d",&year);
	
	leapYear(&year);
}