#include <stdio.h>

int main (int argc, char *argv[])
{
	int number = atoi(argv[1]);
	int d_count = 0;

	while (number != 0){
		number=number/10;
		d_count++;
	}
	printf("%d\n", d_count);
	return 0;
}
