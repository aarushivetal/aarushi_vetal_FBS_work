void calculator(int a,int b,char op)
{
	if(op == '+')
		printf("Result = %d", a + b);
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
	int a,b;
	char op;
	
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	printf("enter operator (+,-,*,/,%%): ");
	scanf(" %c",&op);
	
	calculator(a,b,op);
}