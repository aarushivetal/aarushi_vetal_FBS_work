#include<stdio.h>

struct Time
{
    int hour;
    int min;
    int sec;
};

struct Time storeTime();
void display(struct Time t);

int main()
{
    struct Time t1,t2,t3;

    t1 = storeTime();
    t2 = storeTime();
    t3 = storeTime();

    display(t1);
    display(t2);
    display(t3);

    return 0;
}

struct Time storeTime()
{
    struct Time t;

    printf("Enter Hour Minute Second: ");
    scanf("%d %d %d",&t.hour,&t.min,&t.sec);

    return t;
}

void display(struct Time t)
{
    printf("\nTime = %d:%d:%d\n",t.hour,t.min,t.sec);
}