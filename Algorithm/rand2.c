#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice;

	srand(time(0));
	//rand();をいれてもok

	dice = rand() % 6 + 1;
	printf("サイコロは%dです\n", dice);
}