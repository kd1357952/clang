#include<stdio.h>
main()
{
	int num, i;

	printf("”‚ð“ü‚ê‚Ä:");
	scanf("%d", &num);
	i = num;
	while (i > 0)
	{
		printf("*");
		i--;
	}
}