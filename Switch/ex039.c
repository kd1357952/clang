#include<stdio.h>
main()
{
	char shori;
	int su1, su2;

	printf("���������:");
	scanf("%c", &shori);

	printf("���������:");
	scanf("%d%d", &su1, &su2);

	switch (shori)
	{
	case'D':
	case'd':
		//�ő�l�����߂�
		if (su1 > su2) 
		{
			printf("�ő�l��%d�ł�\n", su1);
		}
		else
		{
			printf("�ő�l��%d�ł�\n", su2);
		}
		break;
	case'S':
	case's':
		//�ŏ��l�����߂�
		if (su1 < su2)
		{
			printf("�ŏ��l��%d�ł�\n", su1);
		}
		else
		{
			printf("�ŏ��l��%d�ł�\n", su2);
		}
		break;
	case'G':
	case'g':
		//���v�����߂�
		printf("���v��%d�ł�\n", su1 + su2);
		break;
	case'H':
	case'h':
		//���ς����߂�
		printf("���ς�%.2f�ł�\n", (su1 + su2) / 2.0);
		break;
	}
}