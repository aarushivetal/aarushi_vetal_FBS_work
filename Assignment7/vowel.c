void vowel(char *p)
{
	if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' || *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U')
    	{
			printf("vowel");
		}
	else
		{
			printf("not vowel");
		}
}

void main()
{
    char ch;

    printf("Enter Character: ");
    scanf("%c", &ch);

    vowel(&ch);
}