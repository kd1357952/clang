#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);
main()
{
	int a, b, c, d, e, f;
	printf("���l1�H");
	scanf("%d", &a);
	printf("���l2�H");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f);
	puts("���l�Ɛ��l�̎l�����Z");
	printf("�a:%d ��:%d ��:%d ��:%d �]:%d",a+b,a-b,);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	*ama = x % y;
}