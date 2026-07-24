#include <stdio.h>

int calculator()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    if(op == '+')
        return a + b;
    else if(op == '-')
        return a - b;
    else if(op == '*')
        return a * b;
    else if(op == '/')
        return a / b;
    else if(op == '%')
        return a % b;
    else
        return 0;
}

void main()
{
    int result;

    result = calculator();

    printf("Result = %d", result);
}