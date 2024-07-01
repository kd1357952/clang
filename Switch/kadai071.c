#include<stdio.h>
main()
{
	char en;
	int i, j;
	printf("整数1？");
	scanf("%d", &i);
	printf("整数2？");
	scanf("%d", &j);
	printf("演算子？");
	scanf("%c", & en);
	switch(en)
	{
	case'+':
		printf("%d+%d=%d\n", i, j, i + j);
		break;
	case'-':
		printf("%d - %d = %d\n", i, j, i - j);
		break;
	case'*':
		printf("%d * %d = %d\n", i, j, i * j);
		break;
	case'/':
		printf("%d / %d = %d\n", i, j, i / j);
		break;
	case'%':
		printf("%d % %d = %dあまり%d\n", i, j, i / j, i % j);
		break;
	}
}