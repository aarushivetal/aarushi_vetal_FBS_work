#include <stdio.h>

float salary(float basic)
{
    float da, ta, hra, total;

    if(basic <= 5000)
    {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total = basic + da + ta + hra;

    return total;
}

void main()
{
    float basic, result;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    result = salary(basic);

    printf("Total Salary = %.2f", result);
}