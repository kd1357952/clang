#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, i, j;
	
	srand(time(0));
	rand();
	a = rand() % 1000 + 1;
	
	printf("1〜1000の中であたりの数を予想してください\n");
	j = 0;
	while (1) {
		printf("当たりの数は？");
		scanf("%d", &i);
		j++;
		if (a < i) {
			printf("当たりの数より大きいです\n");
		}
		else if (a > i) {
			printf("当たりの数より小さいです\n");
		}
		else {
			printf("当たり！ %d回目で当たりました\n", j);
			break;
		}
	}
}