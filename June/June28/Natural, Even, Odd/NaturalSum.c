#include <stdio.h>

int main(int argc, char *argv[])
{
	int input = atoi(argv[1]);
	int i=0;
	int sum=0;
	
	while (i<input){
		sum = i+sum;
		i++;
	}
	printf("%d\n", sum-1);
	return 0;
}
