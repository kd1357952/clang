#include<stdio.h>
main()
{
	int n,sum,cnt;

	sum = cnt = 0;
	printf("®”:");
	while (scanf("%d", &n) != EOF)
	{
		sum += n;
		cnt++;
		printf("®”:");
	}
	printf("‡Œv=%d\t•½‹Ï=%.2f\n", sum, (float)sum / cnt);
}