#include<stdio.h>
main()
{
	char en;
	int i, j;
	printf("����1�H");
	scanf("%d", &i);
	printf("����2�H");
	scanf("%d", &j);
	printf("���Z�q�H");
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
		printf("%d % %d = %d���܂�%d\n", i, j, i / j, i % j);
		break;
	}
}