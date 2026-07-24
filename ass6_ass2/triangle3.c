#include <stdio.h>

int triangle()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a == b && b == c)
        return 1;
    else if(a == b || b == c || a == c)
        return 2;
    else
        return 3;
}

void main()
{
    int result;

    result = triangle();

    if(result == 1)
        printf("Equilateral Triangle");
    else if(result == 2)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}