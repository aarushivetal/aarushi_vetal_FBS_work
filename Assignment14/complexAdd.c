#include<stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

void storeComplex(struct Complex *c);
void display(struct Complex *c);

int main()
{
    struct Complex c1;

    storeComplex(&c1);
    display(&c1);

    return 0;
}

void storeComplex(struct Complex *c)
{
    printf("Enter Real and Imaginary Part: ");
    scanf("%f %f",&c->real,&c->imaginary);
}

void display(struct Complex *c)
{
    printf("\nComplex Number = %.2f + %.2fi",c->real,c->imaginary);
}