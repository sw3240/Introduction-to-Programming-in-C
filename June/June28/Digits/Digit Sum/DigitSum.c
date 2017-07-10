#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int number = atoi(argv[1]);
	int d_last = 0;
	int sum = 0;

	while (number>0){
		d_last = number%10;
		sum += d_last;
		number /= 10;
	}
	printf("%d\n", sum);
	return 0;
}
