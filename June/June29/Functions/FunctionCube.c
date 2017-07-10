#include <stdio.h>

double cube(double number)
{
	return(number * number * number);
}

int main(int argc, char *argv[])
{
	int number = atoi(argv[1]);
	long output = 0;

	output = cube(number);

	printf("%d^3 = %ld\n", number, output);

	return 0;
}
