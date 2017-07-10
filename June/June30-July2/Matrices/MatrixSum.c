#include <stdio.h>

int main()
{
	
	int a, b, i, j, k, l;
	int input;
	
	printf("Create a matrix!\nChoose the size (a x b)\n");
	printf("a:");
	scanf("%d", &a);
	printf("b:");
	scanf("%d", &b);
	
	int matrix1[a][b];
	
	for (i=0; i<a; i++){
		for (j=0; j<b; j++){
			matrix1[i][j] = 0;
		}
	}
	
	for (i=0; i<a; i++){
		printf("[ ");
		for(j=0; j<b; j++){
			printf("%d ", matrix1[i][j]);
		}
		printf("]\n");
	}
	for (i=0; i<a; i++){
		for(j=0; j<b; j++){
			printf("The value at %d,%d is:", i+1, j+1);
			scanf("%d", &input);
			matrix1[i][j] = input;
			
			for (k=0; k<a; k++){
				printf("[ ");
				for(l=0; l<b; l++){
					printf("%d ", matrix1[k][l]);
				}
				printf("]\n");
			}
			
		}
	}
	
	printf("Create another matrix! The size wil be the same as the previous.\n");
	
	int matrix2[a][b];
	
	for (i=0; i<a; i++){
		for (j=0; j<b; j++){
			matrix2[i][j] = 0;
		}
	}
	
	for (i=0; i<a; i++){
		printf("[ ");
		for(j=0; j<b; j++){
			printf("%d ", matrix2[i][j]);
		}
		printf("]\n");
	}
	for (i=0; i<a; i++){
		for(j=0; j<b; j++){
			printf("The value at %d,%d is:", i+1, j+1);
			scanf("%d", &input);
			matrix2[i][j] = input;
			
			for (k=0; k<a; k++){
				printf("[ ");
				for(l=0; l<b; l++){
					printf("%d ", matrix2[k][l]);
				}
				printf("]\n");
			}
			
		}
	}
	int matrix_sum[a][b];
	printf("The sum of the two matricies is:\n");
	for (i=0; i<a; i++){
		printf("[ ");
		for(j=0; j<a; j++){
			matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("%d ", matrix_sum[i][j]);
		}
		printf("]\n");
	}
	return 0;
}
