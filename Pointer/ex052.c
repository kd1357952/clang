#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int* p_a = &a, * p_b = &b;
	printf("é¿çsëO:a=%d\tb=%d\n", a, b);
	w = *p_a;			// w = a Ç∆ìØÇ∂
	*p_a = *p_b;		// a = b Ç∆ìØÇ∂
	*p_b = w;			// b = w Ç∆ìØÇ∂

	printf("é¿çså„:a=%d\tb=%d\n", a, b);
	printf("&a=%p\t&b=%p\t&w=%p\n", &a, &b, &w);
	printf("p_a=%p\tp_b=%p\n", p_a, p_b);
	printf("&p_a=%p\t&p_b=%p\n", &p_a, &p_b);
}