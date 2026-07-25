#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "C,C++,Java,Python";
    char *token;

    token = strtok(str, ",");

    while(token != '\0')
    {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }
}