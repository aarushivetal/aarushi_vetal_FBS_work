#include<stdio.h>

struct Complex
{
	float real;
	float imaginary;
};

void storeComplex(struct Complex c[],int n);
void display(struct Complex c[],int n);

int main()
{
	struct Complex c[3];
	
	storeComplex(c,3);
	
	display(c,3);

	return 0;
}

void storeComplex(struct Complex c[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("enter real and imaginary:");
		scanf("%f %f",&c[i].real,&c[i].imaginary);
	}
}

void display(struct Complex c[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("\nComplex Number=%.2f+%.2fi\n",c[i].real,c[i].imaginary);
	}
	
}
