#include<stdio.h>


struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile student[5] =
	{
		{"�A�[�T�[	",{2000,2,22},"A"},
		{"���V�t�@�[	",{2002,8,12},"B"},
		{"�q���h��	",{2001,4,21},"AB"},
		{"�f�u���C�l	",{2000,2,7},"O"},
		{"�t�H�[�f��	",{2000,2,4},"A"}
	};
	struct profile* p;
	int i;

	//p�ɐ擪�A�h���X������
	p = student;
	//A�^�̃f�[�^�݂̂�\��
	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki == 2)
		{
			//�\��
			printf("%s--%d�N%d��%d�����܂�@���t�^-%s�^\n",
				p->name, p->birth.nen, p->birth.tuki, p->birth.hi,
				p->blood);
		}
		p++;
	}
}