#include <stdio.h>

int main(int argc, char *argv[])
{
	int input = atoi(argv[1]);
	int i=0;
	int sum=0;
	
	while (i<input){
		sum = i+sum;
		i = i+2;
	}
	printf("%d\n", sum);
	return 0;
}
