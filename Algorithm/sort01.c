#include<stdio.h>
main()
{
	int d[] = {30,7,25,16,10 };
	int i, j, w;

	//�\�[�g
	for (i = 0; i < 4; i = i ++)	//��r��
	{
		for (j = i + 1; j < 5; j = j++)		//��r��
		{
			if (d[i]>d[j])
			{
				//����ւ�
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	//���ʕ\��
	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");
}