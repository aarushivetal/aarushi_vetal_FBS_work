#include<stdio.h>

struct Distance
{
	int inch;
	int feet;
};

void storeDistance(struct Distance d[],int n);
void display(struct Distance d[],int n);

int main()
{
	struct Distance d[3];
	
	storeDistance(d,3);
	
	display(d,3);
	
	return 0;
}

void storeDistance(struct Distance d[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter inch and feet:");
	 	scanf("%d %d",&d[i].inch,&d[i].feet);
	}
}

void display(struct Distance d[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("\nDistance %d inch %d feet\n",d[i].inch,d[i].feet);
	}
}