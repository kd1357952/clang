#include<stdio.h>
main()
{
	int a, i, m;

	printf("���́H");
	scanf("%d", &a);

	i = 0;
	do {
		m = 0;
		do {
			printf("*");
			m++;
		} while (m <= i);
		printf("\n");
		i++;
	} while (i < a);
}