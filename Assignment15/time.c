#include<stdio.h>

struct time
{
	int hrs;
	int min;
	int sec;
};

int main()
{
	struct time t1,t2,t3;
	int totalSec1, totalSec2;
	
	printf("enter time 1:");
	scanf("%d %d %d",&t1.hrs,&t1.min,&t1.sec);
	
	printf("enter time 2:");
	scanf("%d %d %d",&t2.hrs,&t2.min,&t2.sec);
	
	printf("\nTime 1 = %d:%d:%d",t1.hrs, t1.min, t1.sec);

    printf("\nTime 2 = %d:%d:%d",t2.hrs, t2.min, t2.sec);
	
	t3.hrs=t1.hrs+t2.hrs;
	t3.min=t1.min+t2.min;
	t3.sec=t1.sec+t2.sec;
	
	if(t3.sec >= 60)
    {
        t3.min += t3.sec / 60;
        t3.sec = t3.sec % 60;
    }
    
    if(t3.min >= 60)
	{
	    t3.hrs += t3.min / 60;
	    t3.min = t3.min % 60;
	}
	
	printf("\nAdded Time = %d:%d:%d",t3.hrs, t3.min, t3.sec);

    totalSec1 = t1.hrs * 3600 + t1.min * 60 + t1.sec;
    
    totalSec2 = t2.hrs * 3600 + t2.min * 60 + t2.sec;

    printf("\nTime1 in Seconds = %d", totalSec1);
    
    printf("\nTime2 in Seconds = %d", totalSec2);

    return 0;	
}