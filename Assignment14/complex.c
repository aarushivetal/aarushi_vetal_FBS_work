#include<stdio.h>

struct Complex
{
	float real;
	float imaginary;
};

struct Complex storeComplex();
void display(struct Complex c);

int main()
{
	struct Complex c1,c2,c3;
	
	c1=storeComplex();
	c2=storeComplex();
	c3=storeComplex();
	
	display(c1);
	display(c2);
	display(c3);
	
	return 0;
}

struct Complex storeComplex()
{
	struct Complex c;
	
	printf("enter real and imaginary:");
	scanf("%f %f",&c.real,&c.imaginary);
	
	return c;
}

void display(struct Complex c)
{
	printf("\nComplex Number=%.2f+%.2fi\n",c.real,c.imaginary);
	
}
