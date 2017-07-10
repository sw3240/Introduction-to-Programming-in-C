#include <stdio.h>

int sum(int n1, int n2){return(n1+n2);}

int main(int argc, char *argv[])
{
	int in1;
	int in2;
	int ttl;
	
	printf("first number:\n");
	scanf("%d", &in1);
	
	printf("second number:\n");
	scanf("%d", &in2);
	
	ttl = sum(in1, in2);
	printf("sum = %d\n", ttl);

	return 0;
}
	
