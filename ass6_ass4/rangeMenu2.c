void menu(int no);

void main()
{
    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    menu(no);
}

void menu(int no)
{
	int choice;
	int i, flag = 1, temp, rem, rev = 0, sum = 0;
	
	printf("\n1. Even/Odd");
    printf("\n2. Prime");
    printf("\n3. Palindrome");
    printf("\n4. Positive/Negative/Zero");
    printf("\n5. Reverse");
    printf("\n6. Sum of Digits");

    printf("\nEnter Choice: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
    	case 1:
    		if(no%2==0)
    			printf("Even Number");
            else
                printf("Odd Number");
            break;
        
        case 2:
        	if(no<=1)
        		flag=0;
        		
        	for(i=2;i<no;i++)
        	{
        		if(no % i == 0)
                {
                    flag = 0;
                    break;
                }
			}
			
			if(flag == 1)
                printf("Prime Number");
            else
                printf("Not Prime Number");
            break;
    	
		case 3:
			temp = no;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            if(rev == no)
                printf("Palindrome Number");
            else
                printf("Not Palindrome Number");
            break;
		
		case 4:
            if(no > 0)
                printf("Positive Number");
            else if(no < 0)
                printf("Negative Number");
            else
                printf("Zero");
            break;
		
		case 5:
            temp = no;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse = %d", rev);
            break;
			
		case 6:
            temp = no;
            sum = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            printf("Sum of Digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");	
	}
}