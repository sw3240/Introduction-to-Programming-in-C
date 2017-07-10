#include <stdio.h>

int main (int argc, char *argv[])
{
	int i = 0;
	int array[100];
	int odd_count;
	for (i=1; i<argc; i++){
		array[i]=atoi(argv[i]);
		if (array[i]%2==1){
			odd_count++;
		}
	}
	printf("%d\n", odd_count);
	return 0;
}	
