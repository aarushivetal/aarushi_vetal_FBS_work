#include<stdio.h>

struct Admin
{
    int id;
    char name[20];
    double salary;
    double allowance;
};

void storeAdmin(struct Admin *a);
void display(struct Admin *a);

int main()
{
    struct Admin a1;

    storeAdmin(&a1);
    display(&a1);

    return 0;
}

void storeAdmin(struct Admin *a)
{
    printf("Enter ID, Name, Salary and Allowance: ");
    scanf("%d %s %f %f",&a->id,a->name,&a->salary,&a->allowance);
}

void display(struct Admin *a)
{
    printf("\nID = %d", a->id);
    printf("\nName = %s", a->name);
    printf("\nSalary = %.2f", a->salary);
    printf("\nAllowance = %.2f", a->allowance);
}