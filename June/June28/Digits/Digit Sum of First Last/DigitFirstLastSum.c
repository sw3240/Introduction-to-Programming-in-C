#include <stdio.h>

int main (int argc, char *argv[])
{
	int number = atoi(argv[1]);
	int first = 0;
	int last = number%10;
	int sum = 0;

	while (number>=10){
		number=number/10;
	}
	first = number;
	sum = first + last;
	printf("%d\n", sum);
	return 0;
}
