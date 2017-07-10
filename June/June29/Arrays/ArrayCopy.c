#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int array1[100];
	int array2[100];
	
	printf("array1 = ");
	for (i=1; i<argc; i++){
		array1[i] = atoi(argv[i]);	
		printf("%d, ", array1[i]);
		array2[i] = array1[i];
	}
	printf("array2 = ");
	i = 0;
	for (i=1; i<argc; i++){
		printf("%d, ", array2[i]);
	}
	printf("\n");
	return 0;
}
