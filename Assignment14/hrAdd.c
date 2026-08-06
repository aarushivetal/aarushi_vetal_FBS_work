#include<stdio.h>

struct HR
{
    int id;
    char name[20];
    double salary;
    double commission;
};

void storeHR(struct HR *h);
void display(struct HR *h);

int main()
{
    struct HR h1;

    storeHR(&h1);
    display(&h1);

    return 0;
}

void storeHR(struct HR *h)
{
    printf("Enter ID, Name, Salary and Commission: ");
    scanf("%d %s %f %f",&h->id,h->name,&h->salary,&h->commission);
}

void display(struct HR *h)
{
    printf("\nID = %d", h->id);
    printf("\nName = %s", h->name);
    printf("\nSalary = %.2f", h->salary);
    printf("\nCommission = %.2f", h->commission);
}