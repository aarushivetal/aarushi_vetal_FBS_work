void main()
{
	int a=10,b=10,c=8;
	
	if(a==b && b==c)
		printf("Equilateral Triangle");
	else if(a==b || b==c || a==c)
		printf("Isosceles Triangle");
	else
		printf("Scalene Triangle");
}