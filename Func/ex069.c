#include<stdio.h>
main()
{
	int n,sum,cnt;

	sum = cnt = 0;
	printf("����:");
	while (scanf("%d", &n) != EOF)
	{
		sum += n;
		cnt++;
		printf("����:");
	}
	printf("���v=%d\t����=%.2f\n", sum, (float)sum / cnt);
}