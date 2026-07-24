void salary(float basic)
{
	float da, ta, hra, total;

    if(basic <= 5000)
    {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total = basic + da + ta + hra;

    printf("Total Salary = %.2f", total);
}

void main()
{
	float basic;
	
	printf("enter amount");
	scanf("%f",&basic);
	
	salary(basic);
}