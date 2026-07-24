#include <stdio.h>

void main()
{
    printNumbers(1, 10);
}

void printNumbers(int start, int end)
{
    int i;

    for(i=start; i<=end; i++)
    {
        printf("%d ", i);
    }
}

