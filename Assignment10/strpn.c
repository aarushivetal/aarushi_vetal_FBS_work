#include<string.h>
#include<stdio.h>
void main()
{
   char str[]="abc123";
   
   printf("count = %d",strspn(str,"abcdefghijklmnopqrstuvwxyz"));
}