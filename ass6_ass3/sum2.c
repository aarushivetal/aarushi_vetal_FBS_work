#include <stdio.h>

void main()
{
    int start, end;

    printf("Enter Start and End: ");
    scanf("%d%d", &start, &end);

    sumRange(start, end);
}

void sumRange(int start, int end)
{
    int sum=0, i;

    for(i=start; i<=end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}

