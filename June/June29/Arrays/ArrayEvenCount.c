#include <stdio.h>

int main (int argc, char *argv[])
{
	int array[100];
	int i = 1;
	int even_count =0;
	for (i=1; i<argc; i++) {
		array[i] = atoi(argv[i]);
		if (array[i]%2==0){
			even_count++;
		}
	}
	printf("%d\n", even_count);
	return 0;
	
}
