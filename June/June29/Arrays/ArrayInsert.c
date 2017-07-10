#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int insert = atoi(argv[1]);
	int array[100];
	
	printf("array = ");
	for (i=1; i<5; i++){
		array[i] = i;
		printf("%d", array[i]);
	}
	printf("\n");
	array[5] = array[4];
	array[4] = array[3];
	array[3] = insert;
	printf("new array = ");
	for (i=1; i<6; i++){
		printf("%d", array[i]);
	}
	printf("\n");
	return 0;
}
