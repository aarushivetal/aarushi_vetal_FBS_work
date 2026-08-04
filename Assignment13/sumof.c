#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,*arr,sum=0;
	
	printf("enter size:");
	scanf("%d",&n);
	
	arr = (int *)malloc(n*sizeof(int));
	
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	
	printf("Sum = %d",sum);
	
    return 0;		
}