#include <stdio.h>

int main (int argc, char *argv[])
{
	int number = atoi(argv[1]);
	int prime_number = 2;
	int factor = 2;
	int prime = 1;
	
	while (prime_number<number){
		prime = 1;
		factor = 2;
		while (factor<prime_number){
			if ((prime_number%factor)==0){
				prime = 0;
			} else {
			}
		factor++;
		}	
		if (prime == 1){
			printf("%d, ", prime_number);
		} else {
		}
		prime_number++;
	}
	printf("\n");
	return 0;
}
