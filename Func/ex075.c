#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);
main()
{
	int a, b, c, d, e, f;
	printf("数値1？");
	scanf("%d", &a);
	printf("数値2？");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f);
	puts("数値と数値の四則演算");
	printf("和:%d 差:%d 積:%d 商:%d 余:%d",a+b,a-b,);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	*ama = x % y;
}