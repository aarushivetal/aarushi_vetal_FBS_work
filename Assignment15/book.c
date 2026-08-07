#include<stdio.h>

struct Book
{
	int id;
	char bname[20];
	char author[20];
	double price;
};

int main()
{
	struct Book b1;
	
	printf("Enter Book ID: ");
    scanf("%d", &b1.id);

    printf("Enter Book Name: ");
    scanf("%s", b1.bname);

    printf("Enter Author Name: ");
    scanf("%s", b1.author);

    printf("Enter Price: ");
    scanf("%lf", &b1.price);	
    
    printf("\nBook Details");
    printf("\nID = %d", b1.id);
    printf("\nBook Name = %s", b1.bname);
    printf("\nAuthor = %s", b1.author);
    printf("\nPrice = %.2lf", b1.price);	
	
	return 0;
}


