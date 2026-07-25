#include<stdio.h>

void search(int *p, int size, int num);

void main()
{
    int arr[5], i, num;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    search(arr, 5, num);
}

void search(int *p, int size, int num)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(*(p + i) == num)
        {
            printf("Number Found at Position %d", i + 1);
            return;
        }
    }
}