#include<stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Product storeProduct();
void display(struct Product p);

int main()
{
    struct Product p1,p2,p3;

    p1 = storeProduct();
    p2 = storeProduct();
    p3 = storeProduct();

    display(p1);
    display(p2);
    display(p3);

    return 0;
}

struct Product storeProduct()
{
    struct Product p;

    printf("Enter ID, Name, Quantity and Price: ");
    scanf("%d %s %d %f",&p.id,p.name,&p.quantity,&p.price);

    return p;
}

void display(struct Product p)
{
    printf("\nID = %d", p.id);
    printf("\nName = %s", p.name);
    printf("\nQuantity = %d", p.quantity);
    printf("\nPrice = %.2f\n", p.price);
}