#include<stdio.h>

struct Time
{
    int hour;
    int min;
    int sec;
};

void storeTime(struct Time t[],int n);
void display(struct Time t[],int n);

int main()
{
    struct Time t[3];

    storeTime(t,3);
    
    display(t,3);

    return 0;
}

void storeTime(struct Time t[],int n)
{
   int i;
   
   for(i=0;i<n;i++)
   {
   	printf("Enter Hour Minute Second: ");
    scanf("%d %d %d",&t[i].hour,&t[i].min,&t[i].sec);
   }
}

void display(struct Time t[],int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
    	printf("\nTime = %d:%d:%d\n",t[i].hour,t[i].min,t[i].sec);
	}
}