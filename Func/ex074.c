#include<stdio.h>
void display1(int n1);
void display2(int* n2);
main()
{
	int a, b;
	printf("整数a:");
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);
	printf("整数b:");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);
}
/**/
void display1(int n)
{
	printf("数値aは、%dです。\n", n);
	n += 10;
}
void display2(int *n)
{
	printf("数値bは、%dです。\n", *n);
	*n += 10;
}