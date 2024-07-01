#include<stdio.h>
#define Sol_Num 3
typedef struct 
{
	char wname[20];
	int bullet;
	float atk;
} Weapon;

typedef struct 
{
	char name[20];
	int hp;
	Weapon wpn;
} Soldier;

void Setinfo(Soldier* s, char* filename);
void Display(Soldier s);
main()
{
	Soldier sols[Sol_Num];
	Setinfo(sols, "file04.txt");
	Display(sols);
}
void Setinfo(Soldier* s, char* filename)
{
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < Sol_Num; i++)
		{
			fscanf(fp, "%s%d%s%d%f", (s + i)->name, &(s + i)->hp,
				(s + i)->wpn.wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
	else
	{
		printf("�ǂݍ��݃G���[\n");
		return;
	}
}

void Display(Soldier s)
{
	int i;
	for (i = 0; i < Sol_Num; i++)
	{
		printf("���O:%s �̗�:%d\n���햼:%s �c�e��:%d �U����:%.2f\n"
			, (s+i)->.name, (s+i)->.hp, (s+i)->.wpn.wname, (s+i)->.wpn.bullet, (s+i)->.wpn.atk);
	}
}