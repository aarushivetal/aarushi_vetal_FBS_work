#include<stdio.h>

int prime(int no)
{
	int i;
	
	if(no<=1)
		return 0;
		
	for(i=2;i<no;i++)
	{
		 if(no % i == 0)
            return 0;
	}
	
	return 1;
}

void main()
{
	int result,no;
	
	printf("Enter Number: ");
    scanf("%d", &no);

    result = prime(no);

    if(result == 1)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}