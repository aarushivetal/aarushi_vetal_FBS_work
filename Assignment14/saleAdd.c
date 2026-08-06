#include<stdio.h>

struct SalesManager
{
    int id;
    char name[20];
    double salary;
    double incentive;
    double target;
};

void storeSalesManager(struct SalesManager *s);
void display(struct SalesManager *s);

int main()
{
    struct SalesManager s1;

    storeSalesManager(&s1);
    display(&s1);

    return 0;
}

void storeSalesManager(struct SalesManager *s)
{
    printf("Enter ID, Name, Salary, Incentive and Target: ");
    scanf("%d %s %lf %lf %lf",&s->id,s->name,&s->salary,&s->incentive,&s->target);
}

void display(struct SalesManager *s)
{
    printf("\nID = %d", s->id);
    printf("\nName = %s", s->name);
    printf("\nSalary = %.2lf", s->salary);
    printf("\nIncentive = %.2lf", s->incentive);
    printf("\nTarget = %.2lf", s->target);
}