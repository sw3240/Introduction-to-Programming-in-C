#include <stdio.h>

int main (int argc, char *argv[])
{
	int old_number = atoi(argv[1]);
	int new_number = 1;
	int power = atoi(argv[2]);
	int loop_count = 0;

	while (loop_count < power){
		new_number *= old_number;
		loop_count++;
	}
	printf("%d\n", new_number);
	return 0;
}
