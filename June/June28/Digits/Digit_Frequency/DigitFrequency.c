#include <stdio.h>

int main (int argc, char *argv[])
{
	int number = atoi(argv[1]);
	int d_last = 0;
	long digits[10];
	int print_cycle = 0;
	int d_gen =0;
	
	//int x = 0;
	//There are some major issues with this program.
	/*while (x!=10){
		printf("%lu\n", digits[x]);
		x++;
	}
	digits[4] -= 1;
	digits[5] -= 4196317;
	digits[8] -= 4196240;
	digits[9] -= 4195552;
	printf("CCC");*/
	
	while (d_gen<10){
		digits[d_gen] = 0;
		d_gen++;
	}
	while (number>0){
		d_last = number%10;
		number /= 10;
		digits[d_last]++;
		//printf("%d", d_last);
	}
	//printf("DDD");
	while (print_cycle<=9){
		printf("%d appears %ld times.\n", print_cycle, digits[print_cycle]);
		print_cycle++;
	}
	return 0;
}
