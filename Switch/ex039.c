#include<stdio.h>
main()
{
	char shori;
	int su1, su2;

	printf("処理を入力:");
	scanf("%c", &shori);

	printf("整数を入力:");
	scanf("%d%d", &su1, &su2);

	switch (shori)
	{
	case'D':
	case'd':
		//最大値を求める
		if (su1 > su2) 
		{
			printf("最大値は%dです\n", su1);
		}
		else
		{
			printf("最大値は%dです\n", su2);
		}
		break;
	case'S':
	case's':
		//最小値を求める
		if (su1 < su2)
		{
			printf("最小値は%dです\n", su1);
		}
		else
		{
			printf("最小値は%dです\n", su2);
		}
		break;
	case'G':
	case'g':
		//合計を求める
		printf("合計は%dです\n", su1 + su2);
		break;
	case'H':
	case'h':
		//平均を求める
		printf("平均は%.2fです\n", (su1 + su2) / 2.0);
		break;
	}
}