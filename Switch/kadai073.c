#include<stdio.h>
main()
{
	int n;
	char m;
	printf("10�i���̐����H");
	scanf("%d", &n);
	printf("�A���t�@�x�b�g(a or h or d)?");
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