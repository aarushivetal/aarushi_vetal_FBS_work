#include <stdio.h>

void main()
{
    sumRange();
}

void sumRange()
{
    int start, end, sum=0, i;

    printf("Enter Start and End: ");
    scanf("%d%d", &start, &end);

    for(i=start; i<=end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}

