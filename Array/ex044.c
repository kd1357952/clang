#include<stdio.h>
main()
{
	char moji1[80], moji2[80], w[80];
	int i;

	printf("文字列1を入力:");
	scanf("%s", &moji1[0]);

	printf("文字列2を入力:");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s \t moji2 = %s\n", &moji1[0], &moji2[0]);
	printf("入れ替えると\n");

	i = 0;
	while (moji1[i] != '\0') 
	{
		w[i] = moji1[i];
		i++;
	}
	w[i] = '\0';
	
}