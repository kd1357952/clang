#include<stdio.h>
main()
{
	int s, i, d[] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };

	printf("�T���l�́H");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)	//i��0�`9�̊ԃ��[�v
	{
		if(s==d[i])		//�T���l�������������H
		{
			//���[�v�E�o
			break;
		}
	}

	if (i >= 10)		//if(s != d[i]) �ł�OK
	{
		printf("������Ȃ�����\n");
	}
	else {
		printf("d[% d]�ɂ�����\n", i);
	}
}