#include<stdio.h>
main()
{
	int a, i;

	i = 0;
	while(1){
		printf("数を入れて:");
		scanf("%d", &a);
		if (a == -999) break;
			i += a;
	}
	printf("合計= %d", i);
}