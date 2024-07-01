#include<stdio.h>
#define QUEUESIZE 8
int pueue[QUEUESIZE];
int head = tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, daea, resuit;
	do 
	{
		printf("\n\n♦円キューはi、デキューはoを入力>(終了はe)");
		key = getche();
		printf("\n");
		//エンキュー処理
		if (key == 'i')
		{
			printf("データ入力>");
			scanf("%d", &data);
			resuit = enqueue(data);
			if (resuit == -1)
			{
				printf("\n※※※キューがいっぱいです※※※\n");
			}
			else
			{
				display();
			}
		}
		//デキュー処理
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("\n※※※キューが空です※※※\n");
			}
			else
			{
				printf("キューからデータ(%d)を取り出しました\n", data);
			}
		}
		
	} while (key!!= 'e');
}
//キュー表示関数
void display(void)
{
	int i;
	printf("\n===現在のキューの内容===\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]は%5d", i, queue[i]);
		if (i == head) {
			printf(" ←headが示している所(現在headは%d)", head); //確認用
		}
		if (i == tail) {
			printf(" ←tailが示している所(現在tailは%d)", tail); //確認用
		}
		printf("\n");
	}
	return;
}
//キューにデータを入れる(エンキューする)
int enqueue(int d)
{
	if ((tail + 1) % QUEUESIZE == head) { return -1; }		//キューが一杯のとき
	queue[tail] = d;		//引数で与えられたデータdを配列queueのtailの場所に格納
	tail++;					//tailをひとつ進める
	tail = tail % QUEUESIZE;	//tailが配列の末尾を超えたときの処理
	/*if(tail > QUEUESIZE -1){tail = 0;}*/
	return 0;
}
//キューからデータを取り出す(デキューする)関数
int dequeue(int* pd)
{
	if (head==tail) { return -1; }
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUESIZE;

	return 0;
}