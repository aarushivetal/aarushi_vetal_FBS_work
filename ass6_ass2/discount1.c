#include <stdio.h>

void discount()
{
    float price, discount, final_price;
    char student;

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
            discount = price * 20 / 100;
        else
            discount = price * 10 / 100;
    }
    else
    {
        if(price > 600)
            discount = price * 15 / 100;
        else
            discount = 0;
    }

    final_price = price - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final Price = %.2f", final_price);
}

void main()
{
    discount();
}