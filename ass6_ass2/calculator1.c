void calculator()
{
	int a,b;
	char op;
	
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	printf("enter operator (+,-,*,/,%%): ");
	scanf(" %c",&op);
	
	if(op == '+')
		printf("result = %d",a + b);
	else if(op == '-')
        printf("Result = %d", a - b);
    else if(op == '*')
        printf("Result = %d", a * b);
    else if(op == '/')
        printf("Result = %d", a / b);
    else if(op == '%')
        printf("Result = %d", a % b);
    else
        printf("Invalid Operator");
}

void main()
{
    calculator();
}