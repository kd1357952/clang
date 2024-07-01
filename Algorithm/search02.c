#include<stdio.h>
main()
{
	int s, i, d[] = { 10,5,30,77,16,3,47,29,37,33 };
	
	printf("探索値Sを入力:");
	scanf("%d", &s);

	//線形探索の改良（番兵法）1
	//for文を使用した空文で記述
	for (d[10] = s, i = 0; s != d[i]; i++);

	/*
	//線形探索の改良（番兵法）２
	//普通にwhile文で記述
	d[10] = s;
	i = 0;
	while(s != d[i]){
			i++;
	  }
	*/

	if (i == 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("探索値%dを、d[%d]で発見！\n", s, i);
	}
}