#include<stdio.h>
main()
{			//putchar”Å
	char* p_ride[3] = { "car","bus","shinkansen" };
	char* a;
	int i;
	for (i = 0; i < 3; i++)
	{
		a = p_ride[i];
		while (*a)
		{
			putchar(*a++);
		}
		putchar('\n');
	}
}