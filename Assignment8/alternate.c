void main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Alternate Elements are:\n");

    for(i = 0; i < 5; i = i + 2)
    {
        printf("%d ", arr[i]);
    }
}