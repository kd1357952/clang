#include<stdio.h>
struct syohin_data 
{
	char name[20];
	int tanka;
};
main()
{
	struct syohin_data syohin;	//変数
	struct syohin_data* p;		//ポインタ

	p = &syohin;	//先頭アドレスを入れる
	printf("商品名＝");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name = %s\n", p->name);
	printf("p->tanka = %d\n", p->tanka);
	printf("syohin.name = %s\n", syohin.name);
		printf("syohin.tanka = %d\n", syohin.tanka);
}