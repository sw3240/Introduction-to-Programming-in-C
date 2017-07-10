#include <stdio.h>

int main (int argc, char *argv[])
{
	int number=atoi(argv[1]);
	int first=0;
	int last=number%10;

	while (number>10){
		number=number/10;
	}
	first=number;
	printf("The first digit is %d.\n", first);
	printf("The last digit is %d.\n", last);
	
	return 0;
}
