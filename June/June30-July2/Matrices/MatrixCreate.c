#include <stdio.h>

int main (int argc, char *argv[])
{
	int matrix[3][3]= { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };
	int i = 0;
	int j = 0;

	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			matrix[i][j] = 0;
		}
	}
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			matrix[i][j] = atoi(argv[j + 3*i + 1]);
		}
	}
	j = 0;
	for (i=0; i<3; i++){
		printf("[%d %d %d]\n", matrix[i][0], matrix[i][1], matrix[i][2]);
	}
	return 0;
}
