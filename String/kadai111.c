#include<stdio.h>
main()
{
	char str[] = "abcde";
	int cnt;
	cnt = 0;
	while (str[cnt] != '\0')
	{
		printf("%c", str[cnt]);
		cnt++;
	}
}