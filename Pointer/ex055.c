#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int*  p_a = a;
	int i,a_sum = 0;
	float* p_b = b;
	float b_sum = 0;
	printf("sizeof:%d\n", (sizeof a / sizeof(int)));
	for (i = 0; i < (sizeof a/sizeof(int)); i++)
	{
		a_sum += *p_a;
		p_a++;
	}
	printf("zña v=%d\t\t½Ï=%.3f\n", a_sum, (float)a_sum / (sizeof a / sizeof(int)));
	for (i = 0; i < (sizeof b/sizeof(float)); i++)
	{
		b_sum += *p_b;
		p_b++;
	}
	printf("zñb v=%.3f\t½Ï=%.3f\n", b_sum, b_sum / (sizeof b / sizeof(float)));
}