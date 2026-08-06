#include<stdio.h>

struct Product
{
    int id;
    char name[20];
    int quantity;
    double price;
};

void storeProduct(struct Product *p);
void display(struct Product *p);

int main()
{
    struct Product p1;

    storeProduct(&p1);
    display(&p1);

    return 0;
}

void storeProduct(struct Product *p)
{
    printf("Enter ID, Name, Quantity and Price: ");
    scanf("%d %s %d %lf",&p->id,p->name,&p->quantity,&p->price);
}

void display(struct Product *p)
{
    printf("\nID = %d", p->id);
    printf("\nName = %s", p->name);
    printf("\nQuantity = %d", p->quantity);
    printf("\nPrice = %.2lf", p->price);
}