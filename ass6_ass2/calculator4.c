int calculator(int a,int b,char op)
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
        return 0;
}

void main()
{
    int a,b,result;
    char op;
    
    printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	printf("enter operator (+,-,*,/,%%): ");
	scanf(" %c",&op);

    result = calculator(a,b,op);

    printf("Result = %d", result);
}