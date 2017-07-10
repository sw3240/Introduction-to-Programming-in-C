#include <stdio.h>

int main(int argc, char *argv[])
{
	int n1, n2, sum, *p, *q;
	printf("first number:\n");
	scanf("%d", &n1);
	
	printf("second number:\n");
	scanf("%d", &n2);

	p = &n1;
	q = &n2;

	sum = *p + *q;

	printf("sum = %d\n", sum);
}
