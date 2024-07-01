#include<stdio.h>
main()
{
	int num, i;

	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &num);
	i = 0;
	while (i < 11)			//while(i <=10)‚Å‚à‚æ‚¢
	{
		printf("%d+%d=%d\n", num, i, num + i);
		i++;
	}
}