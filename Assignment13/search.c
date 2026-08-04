#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,num,*arr,found=0;
	
	printf("enter size:");
	scanf("%d",&n);
	
	arr = (int *)malloc(n*sizeof(int));
	
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("Enter number to search: ");
    scanf("%d",&num);

	for(i=1;i<n;i++)
	{
		if(arr[i]==num)
		{
			found=1;
			break;
		}
	}
	
	if(found==1)
        printf("Number Found");
    else
        printf("Number Not Found");

    return 0;
}