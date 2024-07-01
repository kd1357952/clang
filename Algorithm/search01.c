#include<stdio.h>
main()
{
	int s, i, d[] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };

	printf("探索値は？");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)	//iが0～9の間ループ
	{
		if(s==d[i])		//探索値が見つかったか？
		{
			//ループ脱出
			break;
		}
	}

	if (i >= 10)		//if(s != d[i]) でもOK
	{
		printf("見つからなかった\n");
	}
	else {
		printf("d[% d]にあった\n", i);
	}
}