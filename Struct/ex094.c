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

	//pに先頭アドレス
	p = student;
	
	//5人分入力
	for (i = 1; i <= 5; i++)
	{
		printf("%d人目（名前）:",i);
		scanf("%s", p->name);		//名前入力
		printf("%d人目（生年月日）:",i);
		scanf("%d%d%d" , &p->birth[0], &p->birth[1], &p->birth[2]);		//生年月日入力
		printf("%d人目（血液型）:",i);
		scanf("%s",p->blood);		//血液型入力
		p++;					//次のデータへ
	}

	//pに先頭アドレスを入れる
	p = student;
	//A型のデータのみを表示
	for (i = 0; i < 5; i++)
	{
		if (strcmp(p->blood, "A") == 0)		//A型か？
		{
			//表示
			printf("%s--%d年%d月%d日生まれ　血液型-%s型\n",
				p->name, p->birth[0], p->birth[1], p->birth[2],
				p->blood);
		}
		p++;
	}
}