#include <stdio.h>

int main (int argc, char *argv[])
{
	int number = atoi(argv[1]);
	int factor = 1;

	while (factor<=number){
		if ((number%factor)==0){
			printf("%d, ", factor);
		} else {
		}
	factor++;
	}
	return 0;
}
