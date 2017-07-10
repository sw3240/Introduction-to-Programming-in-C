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
	return 0;
}
