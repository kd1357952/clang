#include<stdio.h>
#include<string.h>
struct fruit {
	char name[30];	//���i��
	int price;		//���i
	int point;		//���E�ߓx
	int number;		//��
	int total;		//���z
};
main(){
	struct fluit fdat[];
	strcpy(fdat.name,"peach");
	fdat.price = 300;
	fdat.point = 5;
	fdat.number = 3;
	fdat.total = fdat.price * fdat.number;
	printf("���i��:%s\n", fdat.name );
	printf("���i:%d�~\n",fdat.price);
	printf("���E�ߓx:%d");
	for (int i = 0; i < fdat.point; i++)
	{
		printf("��")
	}
	printf("\n��:%d\n", fdat.number);
	printf("���z:%d-\n", fdat.total);
}