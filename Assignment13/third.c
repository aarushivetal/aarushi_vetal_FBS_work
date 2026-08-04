#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,*arr,*brr,*crr;
	
	printf("enter size:");
	scanf("%d",&n);
	
	arr=(int *)malloc(n*sizeof(int));
	brr=(int *)malloc(n*sizeof(int));
	crr=(int *)malloc(n*sizeof(int));
	
	printf("Enter first array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter second array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&brr[i]);
        
    for(i=0;i<n;i++)
    crr[i]=arr[i]+brr[i];
    
    printf("Third Array:\n");
    for(i=0;i<n;i++)
        printf("%d ",crr[i]);

    return 0;
}