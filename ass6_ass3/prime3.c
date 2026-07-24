#include<stdio.h>

int prime()
{
	int no,i;
	
	printf("enter number:");
	scanf("%d",&no);
	
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
	int result;

    result = prime();

    if(result == 1)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}