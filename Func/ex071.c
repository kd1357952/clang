#include<stdio.h>
int add(int a, int b, int c);

main()
{
	int a, b, c, gokei;
	float heikin;
	printf("®”‚ğ3‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	gokei = add(a, b, c);
	heikin = (float)gokei / 3;
	printf("‡Œv‚Í %dA •½‹Ï‚Í %.2f", gokei,heikin );
}

int add(int a, int b, int c)
{
	int ans;
	ans = (a + b + c);
	return ans;
}