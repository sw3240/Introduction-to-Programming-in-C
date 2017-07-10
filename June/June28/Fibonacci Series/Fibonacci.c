#include <stdio.h>

int main (int argc, char *argv[])
{
	int input = atoi(argv[1]);
	int loop_counter = 0;
	int first = 0;
	int second = 1;
	int output = 1;

	while (loop_counter<input){
		printf("%d, ", output);
		output = first + second;
		first = second;
		second = output;
		loop_counter++;
	}
	printf("\n");
	return 0;
}



