#include<stdio.h>
main()
{
	float n1, n2, n3, gokei;
	printf("1�ڂ̎���;");
	scanf("%f", &n1);
	printf("2�ڂ̎���");
	scanf("%f", &n2);
	printf("3�ڂ̎���");
	scanf("%f", &n3);
	gokei = n1 + n2 + n3;
	printf("���v= %.2f", gokei);
	printf("����= %.2f", gokei / 3);
}