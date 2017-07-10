#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int d_count = 1;
	int p_count = 0;
	int d_generator = atoi(argv[1]);
	int number = atoi(argv[1]);
	int d_last = 0;
	int sum = 1;

	while (d_generator>=10){
		d_generator /= 10;
		d_count++;
	}
	while (number>0){
		d_last = number%10;
		sum = d_last * sum;
		number /= 10;
	}
	printf("%d\n", sum);
	return 0;
}
