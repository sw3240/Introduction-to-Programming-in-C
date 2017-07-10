#include <stdio.h>

int main (int argc, char *argv[])
{
	int number = atoi(argv[1]);
	int prime = 1;
	int prime_factor = 2;
	int factor_factor = 2;
	
	while (prime_factor<=number){
		if ((number%prime_factor)==0){
			//"prime_factor" is a factor of "number", now to test if "prime_factor" has any non-one non-"prime_factor" factors.
			prime = 1;
			factor_factor = 2;
			while (factor_factor<prime_factor){
				if (prime_factor%factor_factor == 0){
					prime = 0;
				} else {
				}
				factor_factor++;
			}
			if (prime==1){
				printf("%d, ", prime_factor);
			} else {
			}
		} else {
		}
		prime_factor++;
	}
	printf("\n");
	return 0;
}
				
