int mystrlen(char str[])
{
	int i=0;
	
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}

void main()
{
	char str[50];
	int len;
	
	printf("enter string:");
	gets(str);
	
	len=mystrlen(str);
	
	printf("Length of String = %d", len);
}