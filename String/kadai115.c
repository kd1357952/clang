#include<stdio.h>
main()
{
	char m;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &m);
	
	printf("%c", m);
	m = getchar();
	putchar(m++);
}