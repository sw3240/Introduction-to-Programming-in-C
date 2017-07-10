#include <stdio.h>

int main (int argc, char *argv[])
{
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[2]);
	int factor = 1;
	int gcd = 1;

	while (factor<=number1 && factor<=number2){
		if (((number1%factor)==0) && ((number2%factor)==0)){
			gcd = factor;
		} else {
		}
	factor++;
	}
	printf("%d\n", gcd);
	return 0;
}
