#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
/*スタート地点の座標*/
const int SX = 1;
const int SY = 1;

/*ゴール地点の座標*/
const int GX = 8;
const int GY = 1;

/*迷路データ*/
int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
};
#define STACKSIZE 46 //スタックサイズ ※教科書から変更
int stack[STACKSIZE]; //スタック領域用配列
int sp = 0; //スタックポインタ(配列の添え字)
/* 関数プロトタイプ */
void DrawMaze(int x,int y);
void susumu(int x, int y);
int push(int d);
int pop(int* pd);
/* メイン関数 */
main()
{
	//初期の状態を表示
	system("cls");
	printf("初期の状態を表示\n");
	DrawMane(-1, -1);
	printf("「Enter」キー:処理実行\n");
	getch();

	susumu(SX, SY);

	//最後
	system("cls");
	printf("最後の状態を表示\n");
	DrawMaze(-1, -1);
}
/*迷路描画関数*/
void DrawMaze(int x, int y)
{
	int i, j;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 10; j++)
		{
			//迷路描画
			if (i == y && j == x)
			{
				printf("人");
			}
			else if(i==)
		}
	}
}
/* スタック表示関数 */
void display(void)
{
	int i;
	printf("\n===現在のスタックの内容===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]は%d", i, stack[i]);
		if (i == sp) {
			printf("←spが示している所(現在spは%d)", sp); //確認用
		}
		printf("\n");
	}
	return;
}

/* スタックにデータを積む(プッシュする)関数 */
int push(int d)
{
	if (sp == STACKSIZE) { return -1; } //スタックが一杯のとき
	stack[sp] = d;
	sp++;
	return 0;
}
/* スタックからデータを取り出す(ポップする)関数 */
int pop(int* pd)
{
	if (sp == 0) { return -1; } //スタックが空のとき
	sp--;
	*pd = stack[sp];
	stack[sp] = 0; //確認しやすくするため
	return 0;
}