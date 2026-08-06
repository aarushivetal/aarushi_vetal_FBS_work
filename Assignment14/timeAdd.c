#include<stdio.h>

struct Time
{
    int hour;
    int min;
    int sec;
};

void storeTime(struct Time *t);
void display(struct Time *t);

int main()
{
    struct Time t1;

    storeTime(&t1);
    display(&t1);

    return 0;
}

void storeTime(struct Time *t)
{
    printf("Enter Hour, Minute and Second: ");
    scanf("%d %d %d",&t->hour,&t->min,&t->sec);
}

void display(struct Time *t)
{
    printf("\nTime = %d:%d:%d",t->hour,t->min,t->sec);
}