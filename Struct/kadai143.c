#include<stdio.h>
#include<string.h>
struct fruit {
	char name[30];	//¤•i–¼
	int price;		//‰¿Ši
	int point;		//‚¨‘E‚ß“x
	int number;		//ŒÂ”
	int total;		//‹àŠz
};
main(){
	struct fluit fdat[];
	strcpy(fdat.name,"peach");
	fdat.price = 300;
	fdat.point = 5;
	fdat.number = 3;
	fdat.total = fdat.price * fdat.number;
	printf("¤•i–¼:%s\n", fdat.name );
	printf("‰¿Ši:%d‰~\n",fdat.price);
	printf("‚¨‘E‚ß“x:%d");
	for (int i = 0; i < fdat.point; i++)
	{
		printf("š")
	}
	printf("\nŒÂ”:%d\n", fdat.number);
	printf("‹àŠz:%d-\n", fdat.total);
}