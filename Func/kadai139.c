#include<stdio.h>
void hyouji(char moji,int n);
main()
{
	char moji;
	int n;
	printf("•¶šH");
	scanf("%c", &moji);
	printf("®”H");
	scanf("%d", &n);
	hyouji(moji, n);
}
void hyouji(char moji, int n)
{
	//printf("%c\n%d\n", moji, n);
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%c", moji);
	}
}