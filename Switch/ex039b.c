#include<stdio.h>
main()
{
	char shori;
	int su1, su2, su3;
	int s;		//���̍ő�l�i�ŏ��l�j

	printf("���������:");
	scanf("%c", &shori);

	printf("���������:");
	scanf("%d%d%d", &su1, &su2, &su3);

	switch (shori)
	{
	case'D':
	case'd':
		//�ő�l�����߂�
		s = su1;

		if (s < su2) { s = su2; }
		if (s < su3) { s = su3; }
			printf("�ő�l��%d�ł�\n", s);
		break;
	case'S':
	case's':
		//�ŏ��l�����߂�
		s = su1;

		if (s > su2) { s = su2;}
		if (s > su3) { s = su3; }
		printf("�ŏ��l��%d�ł�\n", s);
		break;
	case'G':
	case'g':
		//���v�����߂�
		printf("���v��%d�ł�\n", su1 + su2 + su3);
		break;
	case'H':
	case'h':
		//���ς����߂�
		printf("���ς�%.2f�ł�\n", (su1 + su2 + su3) / 3.0);
		break;
	}
}