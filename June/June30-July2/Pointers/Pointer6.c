#include <stdio.h>

int max2(int n1, int n2)
{
	if (n1>n2){
		return (n1);
	}
	else if (n2<n1){
		return (n2);
	}
}
int main(int argc, char *argv[])
{
	int in1 = 0, in2 = 0;
	int *p, *q;
	int output = 0;
	
	printf("first:\n");
	scanf("%d", &in1);
	
	printf("second:\n");
	scanf("%d", &in2);

	p = &in1;
	q = &in2;
	*p = in1;
	*q = in2;

	output = max2(*p,*q);
	printf("max = %d\n", output);

	return 0;
}
