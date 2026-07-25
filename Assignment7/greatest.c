void main()
{
	int no1,no2,no3;
	
	printf("enter first number:");
	scanf("%d",&no1);
	
	printf("enter second number:");
	scanf("%d",&no2);
	
	printf("enter third number:");
	scanf("%d",&no3);
	
	greatest(&no1,&no2,&no3);	
}

void greatest(int *a, int *b, int *c)
{
	if(*a > *b)
		{
			if(*a > *c)
				printf("%d is greater",*a);
			else
				printf("%d is greater",*c);
		}
	else
		{
			if(*b > *c)
				printf("%d is greater",*b);
			else
				printf("%d is greater",*c);
		}	
	
}