#include <stdio.h>

int main (int argc, char *argv[])
{	
	int integer=atoi(argv[1]);
	char character=argv[2];
	int intchar=0;

	intchar = integer*character;
		printf("%d\n", intchar);
	return 0;
}
