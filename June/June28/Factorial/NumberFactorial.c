#include <stdio.h>

int main (int argc, char *argv[])
{
	int number = atoi(argv[1]);
	int output = 1;
	
	while (number>1){
		output *= number;
		number--;
	}
	printf("%d\n", output);
	return 0;
}
