#include<stdio.h>
main()
{
	int num, i;

	printf("数を入れて:");
	scanf("%d", &num);
	i = num;
	while (i > 0)
	{
		printf("*");
		i--;
	}
}