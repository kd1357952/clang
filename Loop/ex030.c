#include<stdio.h>
main()
{
	int num, i;

	printf("数を入れて:");
	scanf("%d", &num);
	i = 0;
	while (i < 11)			//while(i <=10)でもよい
	{
		printf("%d+%d=%d\n", num, i, num + i);
		i++;
	}
}