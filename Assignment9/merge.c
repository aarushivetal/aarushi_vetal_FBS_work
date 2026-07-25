#include<stdio.h>

void merge(int *p, int *q, int *r, int size);

void main()
{
    int arr[5], brr[5], crr[10];
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

    merge(arr, brr, crr, 5);

    printf("Merged Array:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", crr[i]);
    }
}

void merge(int *p, int *q, int *r, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        *(r + i) = *(p + i);
    }

    for(i = 0; i < size; i++)
    {
        *(r + size + i) = *(q + i);
    }
}