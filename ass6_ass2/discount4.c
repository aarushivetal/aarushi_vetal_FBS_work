#include <stdio.h>

float discount(float price, char student)
{
    float dis, final_price;

    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
            dis = price * 20 / 100;
        else
            dis = price * 10 / 100;
    }
    else
    {
        if(price > 600)
            dis = price * 15 / 100;
        else
            dis = 0;
    }

    final_price = price - dis;

    return final_price;
}

void main()
{
    float price, result;
    char student;

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    result = discount(price, student);

    printf("Final Price = %.2f", result);
}