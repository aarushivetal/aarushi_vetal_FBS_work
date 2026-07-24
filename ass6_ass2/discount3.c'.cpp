#include <stdio.h>

float discount()
{
    float price, dis, final_price;
    char student;

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

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

main()
{
    float result;

    result = discount();

    printf("Final Price = %.2f", result);
}