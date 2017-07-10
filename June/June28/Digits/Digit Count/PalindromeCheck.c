#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int d_count = 1;
	int d_generator = atoi(argv[1]);
	int number = atoi(argv[1]);
	int d_last = 0;
	int loop_count = 0;
	int old_number = atoi(argv[1]);
	int new_number = 0;
	int power_generator = 0;
	int power_placement = 1;
	
	while (d_generator>=10){
		d_generator /= 10;
		d_count++;
	}
	while (power_generator<d_count-1){
		power_placement *= 10;
		power_generator++;
	}
	while (loop_count<d_count){
		d_last = number%10;
		number /= 10; 
		new_number += d_last * power_placement;
		power_placement /= 10;
		loop_count++;
	}
	if (old_number==new_number){
		printf("The number is a palindrome.\n");
	} else {
		printf("The number is not a palindrome\n");
	}
	return 0;
}
