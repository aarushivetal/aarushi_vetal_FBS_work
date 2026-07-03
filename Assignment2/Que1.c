void main()
{
	int a=3,b=2;
	char op='+';
	
	if(op == '+')
		printf("Addition = %d",a+b);
	else if(op == '-')
		printf("substraction = %d",a-b);
	else if(op == '*')
        printf("Multiplication = %d",a*b);
    else if(op == '/')
        printf("Division = %d",a/b);
    else if(op == '%')
        printf("Modulus = %d",a%b);
    else
        printf("Invalid Operator");
}