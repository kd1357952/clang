#include<stdio.h>
main()
{			//printf��
	char* p_ride[3] = { "car","bus","shinkansen" };
	char* cp;
	int i;

	for (i = 0; i < 3; i++)
	{
		cp = p_ride[i];
		while (*cp)
		{
			printf("%c", *cp++);
		}
		printf("\n");
	}
}