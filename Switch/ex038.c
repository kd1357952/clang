#include<stdio.h>
main()
{
	int su;

	printf("整数を入力:");
	scanf("%d", &su);

	switch (su / 10) 
	{
	case 1 :
		printf("10点台です\n");
		break;
	case 2 :
		printf("20点台です\n");
		break;
	case 3 :
		printf("30点台です\n");
		break;
	case 4 :
		printf("40点台です\n");
		break;
	default:
		printf("エラー(10～49を入力)\n");
		break;
	}
}