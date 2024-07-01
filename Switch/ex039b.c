#include<stdio.h>
main()
{
	char shori;
	int su1, su2, su3;
	int s;		//仮の最大値（最小値）

	printf("処理を入力:");
	scanf("%c", &shori);

	printf("整数を入力:");
	scanf("%d%d%d", &su1, &su2, &su3);

	switch (shori)
	{
	case'D':
	case'd':
		//最大値を求める
		s = su1;

		if (s < su2) { s = su2; }
		if (s < su3) { s = su3; }
			printf("最大値は%dです\n", s);
		break;
	case'S':
	case's':
		//最小値を求める
		s = su1;

		if (s > su2) { s = su2;}
		if (s > su3) { s = su3; }
		printf("最小値は%dです\n", s);
		break;
	case'G':
	case'g':
		//合計を求める
		printf("合計は%dです\n", su1 + su2 + su3);
		break;
	case'H':
	case'h':
		//平均を求める
		printf("平均は%.2fです\n", (su1 + su2 + su3) / 3.0);
		break;
	}
}