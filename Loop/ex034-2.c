#include<stdio.h>
main()
{
	int num,i;

	printf("���́H");
	scanf("%d", &num);

	do 
	{
		i = 1;
		do {
			printf("*", i);
			i++;
		} while (i <= 5);
		printf("\n");
		num--;
	} while (num > 0);
}