#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,count,*arr;

    printf("Enter size: ");
    scanf("%d",&n);

    arr=(int *)malloc(n*sizeof(int));

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Prime Numbers:\n");

    for(i=0;i<n;i++)
    {
        count=0;

        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
                count++;
        }

        if(count==2)
            printf("%d ",arr[i]);
    }

    return 0;
}