#include<stdio.h>

struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile student[5];
	struct profile* p;
	int i;

	//p�ɐ擪�A�h���X
	p = student;
	
	//5�l������
	for (i = 1; i <= 5; i++)
	{
		printf("%d�l�ځi���O�j:",i);
		scanf("%s", p->name);		//���O����
		printf("%d�l�ځi���N�����j:",i);
		scanf("%d%d%d" , &p->birth[0], &p->birth[1], &p->birth[2]);		//���N��������
		printf("%d�l�ځi���t�^�j:",i);
		scanf("%s",p->blood);		//���t�^����
		p++;					//���̃f�[�^��
	}

	//p�ɐ擪�A�h���X������
	p = student;
	//A�^�̃f�[�^�݂̂�\��
	for (i = 0; i < 5; i++)
	{
		if (strcmp(p->blood, "A") == 0)		//A�^���H
		{
			//�\��
			printf("%s--%d�N%d��%d�����܂�@���t�^-%s�^\n",
				p->name, p->birth[0], p->birth[1], p->birth[2],
				p->blood);
		}
		p++;
	}
}