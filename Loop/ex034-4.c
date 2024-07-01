#include<stdio.h>
main()
{
	int a, i, j;

	printf("”‚ÍH");
	scanf("%d", &a);
	i = 0;
	do {
		j = 0;
		do {
			printf(" ");
			j = j + 1;			//j++;
		} while (j < a - i);

		j = 0;
		do {
			printf("*");
			j = j + 1;			//j++;
		} while (j <= i);

		printf("\n");
		i = i + 1;				//i++;
	} while (i < a);
}