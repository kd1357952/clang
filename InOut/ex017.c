#include<stdio.h>
main()
{
	float n1, n2, n3, gokei;
	printf("1つ目の実数;");
	scanf("%f", &n1);
	printf("2つ目の実数");
	scanf("%f", &n2);
	printf("3つ目の実数");
	scanf("%f", &n3);
	gokei = n1 + n2 + n3;
	printf("合計= %.2f", gokei);
	printf("平均= %.2f", gokei / 3);
}