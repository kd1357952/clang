#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, i, j;
	
	srand(time(0));
	rand();
	a = rand() % 1000 + 1;
	
	printf("1�`1000�̒��ł�����̐���\�z���Ă�������\n");
	j = 0;
	while (1) {
		printf("������̐��́H");
		scanf("%d", &i);
		j++;
		if (a < i) {
			printf("������̐����傫���ł�\n");
		}
		else if (a > i) {
			printf("������̐���菬�����ł�\n");
		}
		else {
			printf("������I %d��ڂœ�����܂���\n", j);
			break;
		}
	}
}