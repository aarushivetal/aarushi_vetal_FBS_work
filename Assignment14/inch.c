#include<stdio.h>

struct Distance
{
	int inch;
	int feet;
};

struct Distance storeDistance();
void display(struct Distance d);

int main()
{
	struct Distance d1,d2,d3;
	
	d1=storeDistance();
	d2=storeDistance();
	d3=storeDistance();
	
	display(d1);
	display(d2);
	display(d3);
	
	return 0;
}

struct Distance storeDistance()
{
	struct Distance d;
	
	printf("Enter inch and feet:");
	scanf("%d %d",&d.inch,&d.feet);
	
	return d;
}

void display(struct Distance d)
{
	printf("\nDistance %d inch %d feet\n",d.inch,d.feet);
}