void minmax(int *p, int size);

void main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    minmax(arr, 5);
}

void minmax(int *p, int size)
{
    int i, min, max;

    min = *p;
    max = *p;

    for(i = 1; i < size; i++)
    {
        if(*(p + i) < min)
            min = *(p + i);

        if(*(p + i) > max)
            max = *(p + i);
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);
}