#include <stdio.h>

int main()
{
	int a = 4;
	int b = 8;
	
	printf("a = %d, b = %d\n", a, b);
	printf("a & b = %d\n", a&b);
	printf("a | b = %d\n", a|b);
	printf("a ^ b = %d\n", a^b);
	printf("~a = %d\n", ~a);
	printf("b << 2 = %d\n", b<<2);
	printf("b >> 1 = %d\n", b>>1);
}

