#include<stdio.h>
main()
{
	char str[] = "orange";
	int cnt ;

	for (cnt = 0; str[cnt] != '\0'; cnt++);
	printf("•¶š—ñ:%s\n", &str[0]);
	printf("•¶š”‚Í %d •¶š\n", cnt);
}