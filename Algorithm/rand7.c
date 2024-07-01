#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, i, j;
	
	srand(time(0));
	rand();
	a = rand() % 1000 + 1;
	
	printf("1`1000‚Ì’†‚Å‚ ‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	j = 0;
	while (1) {
		printf("“–‚½‚è‚Ì”‚ÍH");
		scanf("%d", &i);
		j++;
		if (a < i) {
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		else if (a > i) {
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		else {
			printf("“–‚½‚èI %d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½\n", j);
			break;
		}
	}
}