#include<stdio.h>
main()
{
	char str[] = "orange";
	int cnt ;

	for (cnt = 0; str[cnt] != '\0'; cnt++);
	printf("文字列:%s\n", &str[0]);
	printf("文字数は %d 文字\n", cnt);
}