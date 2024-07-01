#include<stdio.h>
main()
{
	char str[] = "orange";
	int cnt;

	cnt = 0;
	while (str[cnt] != '\0')		//for(cnt=0;str[cnt]!='\0';cnt++);
	{								//			‹ó•¶
		cnt++;
	}
	printf("•¶š—ñ:%s\n", &str[0]);
	printf("•¶š”‚Í %d •¶š\n", cnt);
}