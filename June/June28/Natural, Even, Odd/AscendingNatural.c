#include <stdio.h>

int main(int argc, char *argv[])
{
	int input = atoi(argv[1]);
	int i;
	
	while (i<input){
		printf("%d\n", i);
		i++;
	}
	return 0;
}
