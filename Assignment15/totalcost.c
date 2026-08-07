#include<stdio.h>

struct Product
{
    char name[20];
    double price;
    int quantity;
};

int main()
{
	struct Product p[10];
	float cost, totalcost=0;
	int n;
	
	printf("How many products do you want to buy? ");
    scanf("%d", &n);
    
	for(int i=0;i<n;i++)
	{
		 printf("\nName: ");
        scanf("%s", p[i].name);

        printf("Price: ");
        scanf("%lf", &p[i].price);

        printf("Quantity: ");
        scanf("%d", &p[i].quantity);
	}
	
	printf("\n\n---- BILL ----\n");

    for(int i=0;i<n;i++)
    {
        cost = p[i].price * p[i].quantity;

        printf("\n%s", p[i].name);
        printf("\nPrice = %.2lf", p[i].price);
        printf("\nQuantity = %d", p[i].quantity);
        printf("\nCost = %.2lf\n", cost);
        
        totalcost += cost;
	}	
	
	 printf("\nTotal Cost = %.2f", totalcost);

    return 0;
}
