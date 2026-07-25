void alternate(int *p, int size);

void main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    alternate(arr, 5);
}

void alternate(int *p, int size)
{
    int i;

    printf("Alternate Elements are:\n");

    for(i = 0; i < size; i = i + 2)
    {
        printf("%d ", *(p + i));
    }
}