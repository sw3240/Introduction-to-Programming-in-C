#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int number = atoi(argv[1]);
	int full_number = atoi(argv[1]);
	int d_count = 0;
	int first = number;
	int last = number%10;
	int power_placement = 1;
	int power_raised = 1;
	int first_subtrahend = 0;
	int last_addend = 0;

	while (first>10){
		first = first/10;
	}
	while (number != 0){
		number = number/10;
		d_count++;
	}
	while (power_raised<d_count){
		power_placement = power_placement * 10;
		power_raised++;
	}
	first_subtrahend = power_placement * first;
	last_addend = power_placement * last;
	full_number = full_number - first_subtrahend - last;
	full_number = full_number + last_addend + first;

	printf("%d\n", full_number);
	//print variables
	//printf("first=%d\n", first);
	//printf("last=%d\n",last);
	//printf("d count=%d\n", d_count);
	//printf("power placement=%d\n", power_placement);
	//printf("power raised=%d\n", power_raised);
	return 0;
}
