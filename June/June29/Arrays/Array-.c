#include <stdio.h>

int main (int argc, char *argv[])
{
	int array[3] = { 0 };
	int array_count = 0;
	
	array[0] = atoi(argv[1]);
	array[1] = atoi(argv[2]);
	array[2] = atoi(argv[3]);
	
	while (array_count<3){
		if (array[array_count]<0){
			printf("%d, ", array[array_count]);
		}
		array_count++;
	}
	printf("\n");
}
