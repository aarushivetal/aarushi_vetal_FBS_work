#include<stdio.h>

struct Date
{
    int date;
    int month;
    int year;
};

void storeDate(struct Date *d);
void display(struct Date *d);

int main()
{
    struct Date d1;

    storeDate(&d1);
    display(&d1);

    return 0;
}

void storeDate(struct Date *d)
{
    printf("Enter Date, Month and Year: ");
    scanf("%d %d %d",&d->date,&d->month,&d->year);
}

void display(struct Date *d)
{
    printf("\nDate = %d/%d/%d",d->date,d->month,d->year);
}