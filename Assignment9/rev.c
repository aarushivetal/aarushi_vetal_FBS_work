#include<stdio.h>

void reverse(int *p, int size);

void main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr, 5);
}

void reverse(int *p, int size)
{
    int i;

    printf("Reverse Array:\n");

    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ", *(p + i));
    }
}c