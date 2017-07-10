#include <stdio.h>

int main(int argc, char *argv[])
{
	int m=300;
	double fx=300.600006;
	char cht='z';
	int *p;
	double *q;
	char *r;
	int i;
	
	printf("Using & operator:\n");
	printf("address of m = %p\n", &m);
	printf("address of fx = %p\n", &fx);
	printf("address of cht = %p\n\n", &cht);

	printf("Using & and * operator:\n");
	printf("value at address of m = %d\n", *(&m));
	printf("value at address of fx = %f\n", *(&fx));
	printf("value at address of cht = %c\n\n", *(&cht));

	printf("Using only pointer variable:\n");
	p = &m;
	printf("address of m = %p\n", p);
	q = &fx;
	printf("address of fx = %p\n", q);
	r = &cht;
	printf("address of cht = %p\n\n", r);
	
	printf("Using only pointer operator:\n");
	p = &m;
	printf("value at address of m = %d\n", *p);
	q = &fx;
	printf("value at address of fx = %f\n", *q);
	r = &cht;
	printf("value at address of cht = %c\n\n", *r);
	
	return 0;
}
