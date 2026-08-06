#include<stdio.h>

struct Distance
{
    int feet;
    int inch;
};

void storeDistance(struct Distance *d);
void display(struct Distance *d);

int main()
{
    struct Distance d1;

    storeDistance(&d1);
    display(&d1);

    return 0;
}

void storeDistance(struct Distance *d)
{
    printf("Enter Feet and Inch: ");
    scanf("%d %d",&d->feet,&d->inch);
}

void display(struct Distance *d)
{
    printf("\nFeet = %d", d->feet);
    printf("\nInch = %d", d->inch);
}