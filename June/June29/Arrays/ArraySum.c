#include <stdio.h>

int main (int argc, char *argv[])
{
	int array[100];
	int i = 1;
	int sum = 0;

	for (i=1; i<argc; i++) {
		array[i] = atoi(argv[i]);
		sum += array[i];
	}
	printf("%d\n", sum);
	return 0;
	
}
