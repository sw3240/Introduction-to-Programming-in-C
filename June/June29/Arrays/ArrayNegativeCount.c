#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int array[100];
	int n_count = 0;

	for (i=0; i<argc; i++){
		array[i] = atoi(argv[i]);
		if (array[i]<0){
			n_count++;
		}
	}
	printf("%d\n", n_count);
	return 0;
}
