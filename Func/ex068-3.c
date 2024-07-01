#include<stdio.h>
main()
{
	int c;		//getchar関数は「入力終了」の場合にEOF(-1)を戻り値として返すため

	//連続1文字入力の定石パターン
	while ((c = getchar()) != EOF)
	{
		putchar(c);
	}
}