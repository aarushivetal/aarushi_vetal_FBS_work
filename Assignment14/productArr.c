#include<stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

void storeProduct(struct Product p[],int n);
void display(struct Product p[],int n);

int main()
{
    struct Product p[3];

    storeProduct(p,3);
    
    display(p,3);

    return 0;
}

void storeProduct(struct Product p[],int n)
{
   int i;
   
   for(i=0;i<n;i++)
   {
   	printf("Enter ID, Name, Quantity and Price: ");
    scanf("%d %s %d %f",&p[i].id,p[i].name,&p[i].quantity,&p[i].price);
   }
}

void display(struct Product p[],int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
    printf("\nID = %d", p[i].id);
    printf("\nName = %s", p[i].name);
    printf("\nQuantity = %d", p[i].quantity);
    printf("\nPrice = %.2f\n", p[i].price);
	}
}