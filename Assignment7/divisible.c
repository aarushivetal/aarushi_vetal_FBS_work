void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    checkNumber(&no);
}

void checkNumber(int *p)
{
	if(*p % 3 == 0 && *p % 5 == 0)
		printf("Divisible by both");
	else if(*p % 3 == 0)
		printf("Divisible by 3 but not by 5");
	else if(*p % 5 == 0)
		printf("Divisible by 5 but not by 3");
	else
		printf("none");
}