#include <stdio.h>

int main (int argc, char *argv[])
{
	int number = atoi(argv[1]);
	int factor = 2;
	int prime = 1;

	while (factor<number){
		if ((number%factor)==0){
			prime = 0;
		} else {
		}
	factor++;
	}	
	if (prime==0){
		printf("The number is composite.\n");
	}else if (prime==1){
		printf("The number is prime.\n");
	}
	return 0;
}
