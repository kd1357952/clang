#include<stdio.h>
main()
{
	int n;
	char m;
	printf("10進数の整数？");
	scanf("%d", &n);
	printf("アルファベット(a or h or d)?");
	scanf("%c", &m);
	switch (m)
	{
	case 'o':
	case 'O':
		printf("%o\n", n);
		break;
	case 'h':
	case 'H':
		printf("%x\n", n);
		break;
	}
}