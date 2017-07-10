#include <stdio.h>

int main (int argc, char *argv[])
{
	int input=atoi(argv[1]);
	int factor=1;
	int product=0;
	
	while (factor<=10){
		product=input*factor;
		printf("%d x %d = %d\n", factor, input, product);
		factor++;
	}
	return 0;
}
