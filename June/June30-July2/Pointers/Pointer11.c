#include <stdio.h>

void swap(int *x, int *y, int *z)
{
	//placeholders
	int ph1;
	int ph2;	
	ph1 = *x;
	ph2 = *y;
	*x = *z;
	*y = ph1;
	*z = ph2;
	
	return;
}
int main()
{
	int in1, in2, in3;
	
	printf("in1:");
	scanf("%d", &in1);
	printf("in2:");
	scanf("%d", &in2);
	printf("in3:");
	scanf("%d", &in3);
	
	swap(&in1, &in2, &in3);
	
	printf("in1 = %d\nin2 = %d\nin3 = %d\n", in1, in2, in3);
	return 0;
}
