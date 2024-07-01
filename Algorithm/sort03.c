#include<stdio.h>
main()
{
	int d[] = { 30,7,25,16,10 };
	int i, j, w;

	for (i = 1; i < 5; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			//自分以下の値が出てきたらループ脱出！
			if (d[j + 1] >= d[j])break;

			//入れ替え処理
			w = d[j+1];
			d[j+1] = d[j];
			d[j] = w;
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");
}