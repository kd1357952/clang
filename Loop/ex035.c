#include<stdio.h>
main()
{
	int a, i;

	i = 0;
	while(1){
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &a);
		if (a == -999) break;
			i += a;
	}
	printf("‡Œv= %d", i);
}