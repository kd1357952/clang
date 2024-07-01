#include<stdio.h>
main()
{
	char data[] = "Language", *p_data, ch;
	int i;

	int flg = 0;
	//bool flg = false; true;

	printf("data[]=%s\n", data);
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &ch);

	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++)
	{
		if (ch == *(p_data + i)) 
		{
			printf("%d ", i + 1);
			flg = 1;		//flg=true;
		}	
	}
	if (flg == 1)		// (flg==true)
	{
		printf("•¶š–Ú‚Å‚·\n");
	}
	else
	{
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
}