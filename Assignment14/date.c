#include<stdio.h>

struct Date
{
    int date;
    int month;
    int year;
};

struct Date storeDate();
void display(struct Date d);

int main()
{
    struct Date d1,d2,d3;

    d1 = storeDate();
    d2 = storeDate();
    d3 = storeDate();

    display(d1);
    display(d2);
    display(d3);

    return 0;
}

struct Date storeDate()
{
    struct Date d;

    printf("Enter Date Month Year: ");
    scanf("%d %d %d",&d.date,&d.month,&d.year);

    return d;
}

void display(struct Date d)
{
    printf("\nDate = %d/%d/%d\n",d.date,d.month,d.year);
}