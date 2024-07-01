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
		{"アーサー	",{2000,2,22},"A"},
		{"ルシファー	",{2002,8,12},"B"},
		{"ヒュドラ	",{2001,4,21},"AB"},
		{"デブライネ	",{2000,2,7},"O"},
		{"フォーデン	",{2000,2,4},"A"}
	};
	struct profile* p;
	int i;

	//pに先頭アドレスを入れる
	p = student;
	//A型のデータのみを表示
	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki == 2)
		{
			//表示
			printf("%s--%d年%d月%d日生まれ　血液型-%s型\n",
				p->name, p->birth.nen, p->birth.tuki, p->birth.hi,
				p->blood);
		}
		p++;
	}
}