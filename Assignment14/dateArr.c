#include<stdio.h>

struct Date
{
    int date;
    int month;
    int year;
};

void storeDate(struct Date d[],int n);
void display(struct Date d[],int n);

int main()
{
    struct Date d[3];

  	storeDate(d,3);
   
    display(d,3);
  
    return 0;
}

void storeDate(struct Date d[],int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
    	printf("Enter Date Month Year: ");
    	scanf("%d %d %d",&d[i].date,&d[i].month,&d[i].year);
	}
}

void display(struct Date d[],int n)
{
   int i;
   
   for(i=0;i<n;i++)
   {
   	 printf("\nDate = %d",d[i].date);
   	 printf("\nMonth = %d",d[i].month);
   	 printf("\nyear = %d",d[i].year);
	
   }
}