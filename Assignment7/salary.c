void salary(int *p)
{
	float hra,ta,da,total;
	
	 if(*p <= 5000)
    {
        da  = *p * 10 / 100;
        ta  = *p * 20 / 100;
        hra = *p * 25 / 100;
    }
    else
    {
        da  = *p * 15 / 100;
        ta  = *p * 25 / 100;
        hra = *p * 30 / 100;
    }

    total = *p + da + ta + hra;

    printf("Basic Salary = %.2f\n", *p);
    printf("DA = %.2f\n", da);
    printf("TA = %.2f\n", ta);
    printf("HRA = %.2f\n", hra);
    printf("Total Salary = %.2f", total);
}


void main()
{
	float basic;
	
	printf("enter basic salary:");
	scanf("%d",&basic);
	
	salary(&basic);
}