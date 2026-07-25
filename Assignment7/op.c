void calculator(int *a, int *b, char *op)
{
	if(*op=='+')
		printf("Addition = %d", *a + *b);
	else if(*op=='-')
		printf("substraction = %d", *a - *b);
	 else if(*op == '*')
        printf("Multiplication = %d", *a * *b);

    else if(*op == '/')
        printf("Division = %.2f", (float)*a / *b);

    else if(*op == '%')
        printf("Modulus = %d", *a % *b);

    else
        printf("Invalid Operator");
}

void main()
{
	int no1,no2;
	char op;
	
	printf("enter first no:");
	scanf("%d",&no1);
	
	printf("enter second no:");
	scanf("%d",&no2);
	
	printf("enter operator:");
	scanf(" %c",&op);
	
	calculator(&no1, &no2, &op);
}