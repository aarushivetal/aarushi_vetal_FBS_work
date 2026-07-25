#include<stdio.h>

void addArray(int *p, int *q, int *r, int size);

void main()
{
    int arr[5], brr[5], crr[5];
    int i;

    printf("Enter 5 elements of first array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter 5 elements of second array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }

    addArray(arr, brr, crr, 5);

    printf("Third Array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", crr[i]);
    }
}

void addArray(int *p, int *q, int *r, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        *(r + i) = *(p + i) + *(q + i);
    }
}