#include<stdio.h>
main()
{
	int num, i,sum;
	
	printf("���́H");
	scanf("%d", &num);
	for (i = 0,sum = 0;num != -999;i++)
	{
		sum += num;
		printf("���́H");
		scanf("%d", &num);
	}

	printf("���v = %d \t ���� = %.2f\n", sum, (float)sum / i);
}