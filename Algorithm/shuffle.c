#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int data[20];
	int i, w, target;

	//乱数シャッフル
	srand(time(0));

	//配列内に1～20を入れる
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}

	//配列内をシャッフルする
	for (i = 0; i < 20; i++)
	{
		//tに0～19の乱数を入れる
		target = rand() % 20;

		//i番目とt番目のデータを入れ替える
		w = data[i];
		data[i] = data[target];
		data[target] = w;
	}
	//結果表示
	for (i = 0; i < 20; i++)
	{
		printf("%d ", data[i]);
	}
}