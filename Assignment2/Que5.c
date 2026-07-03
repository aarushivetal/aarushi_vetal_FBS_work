void main()
{
	double price = 550,discount,final_price;
	char student='y';
	
	if(student == 'y')
	{
		if(price>500)
            discount = price * 20 / 100;
        else
            discount = price * 10 / 100;
	}
	else
	{
		if(price>600)
		{
			discount = price * 15 / 100;
			
		}
        else
            discount = 0;
		
	}
	final_price = price - discount;

    printf("Discount = %lf\n", discount);
    printf("Final Price = %lf", final_price);
	
}