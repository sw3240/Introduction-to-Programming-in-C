#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int delete = atoi(argv[1]);
	int array[100];
	
	printf("array = ");
	for (i=1; i<=5; i++){
		array[i] = i;
		
	}
	array[6]='\0';
	for (i=1; i<=5; i++){
		if (i>=delete){
			array[i]=array[i+1];
		}
	}
	for (i=1; i<5; i++){
		printf("%d", array[i]);
	}
	
	printf("\n");
	return 0;
}
