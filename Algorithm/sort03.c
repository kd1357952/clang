#include<stdio.h>
main()
{
	int d[] = { 30,7,25,16,10 };
	int i, j, w;

	for (i = 1; i < 5; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			//�����ȉ��̒l���o�Ă����烋�[�v�E�o�I
			if (d[j + 1] >= d[j])break;

			//����ւ�����
			w = d[j+1];
			d[j+1] = d[j];
			d[j] = w;
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");
}