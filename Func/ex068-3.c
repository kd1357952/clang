#include<stdio.h>
main()
{
	int c;		//getchar�֐��́u���͏I���v�̏ꍇ��EOF(-1)��߂�l�Ƃ��ĕԂ�����

	//�A��1�������͂̒�΃p�^�[��
	while ((c = getchar()) != EOF)
	{
		putchar(c);
	}
}