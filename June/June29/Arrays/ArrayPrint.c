#include <stdio.h>

int main (int argc, char *argv[])
{
	int array[3] = { 0 };
	array[0] = atoi(argv[1]);
	array[1] = atoi(argv[2]);
	array[2] = atoi(argv[3]);
	
	printf("%d, %d, %d\n", array[0], array[1], array[2]);
}
