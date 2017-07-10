#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int d_count = 1;
	int d_generator = atoi(argv[1]);
	int number = atoi(argv[1]);
	int d_last = 0;
	int loop_count = 0;
	
	while (d_generator>=10){
		d_generator /= 10;
		d_count++;
	}
	while (loop_count<d_count){
		d_last = number%10;
		number /= 10;
		printf("%d", d_last);
		loop_count++;

	}
	printf("\n");
	return 0;
}
