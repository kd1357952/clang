#include<stdio.h>
main()
{
	int a, i;

	i = 0;
	while(1){
		printf("��������:");
		scanf("%d", &a);
		if (a == -999) break;
			i += a;
	}
	printf("���v= %d", i);
}