#include<stdio.h>
struct syohin_data 
{
	char name[20];
	int tanka;
};
main()
{
	struct syohin_data syohin;	//�ϐ�
	struct syohin_data* p;		//�|�C���^

	p = &syohin;	//�擪�A�h���X������
	printf("���i����");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name = %s\n", p->name);
	printf("p->tanka = %d\n", p->tanka);
	printf("syohin.name = %s\n", syohin.name);
		printf("syohin.tanka = %d\n", syohin.tanka);
}