void main()
{
    int side1, side2, side3;

    printf("Enter First Side: ");
    scanf("%d", &side1);

    printf("Enter Second Side: ");
    scanf("%d", &side2);

    printf("Enter Third Side: ");
    scanf("%d", &side3);

    triangle(&side1, &side2, &side3);
}

void triangle(int *a, int *b, int *c)
{
	if(*a == *b && *b == *c)
        printf("Equilateral Triangle");

    else if(*a == *b || *b == *c || *a == *c)
        printf("Isosceles Triangle");

    else
        printf("Scalene Triangle");
}

