#include<stdio.h>
main()
{
	char m;
	printf("������́H");
	scanf("%s", &m);
	
	printf("%c", m);
	m = getchar();
	putchar(m++);
}