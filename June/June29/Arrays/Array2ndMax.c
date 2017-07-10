#include <stdio.h>

int main (int argc, char *argv[])
{
	int array[100];
	int i = 1;
	int max = 0;
	int max2 = 0;

	for (i=1; i<argc; i++) {
		array[i] = atoi(argv[i]);
		if (array[i]>max){
			max = array[i];
		} else if (array[i] > max2 && array[i] != max){
			max2 = array[i];
		}
	}
	
	i=1;
	for (i=1; i<argc; i++) {
		array[i] = atoi(argv[i]);
		if (array[i]>max){
			max = array[i];
		} else if (array[i] > max2 && array[i] != max){
			max2 = array[i];
		}
	}
	printf("Second largest number = %d\n", max2);
	return 0;
	
}
