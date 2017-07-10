#include <stdio.h>

int main (int argc, char *argv[])
{
	int array[100];
	int i = 1;
	int max = 0;
	int min = argv[1];

	for (i=1; i<argc; i++) {
		array[i] = atoi(argv[i]);
		if (array[i]>max){
			max = array[i];
		} 
		if (array[i]<min){
			min = array[i];
		}
	}
	printf("max = %d\nmin = %d\n", max, min);
	return 0;
	
}
