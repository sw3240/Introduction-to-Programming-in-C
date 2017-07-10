#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int numbers[4] = { 0 };
	char name[4] = { 'a','a','a','a' };

	//first print them out raw
	printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("Name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

	printf("Name: %s\n", name);

	//setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	//setup name
	name[0] = 'S';
	name[1] = 'e';
	name[2] = 'a';
	name[3] = 'n';
	name[4] = '\0';

	//print them out uninitialized
	printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("Name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	
	//print them out as a string
	printf("Name: %s\n", name);

	//Another way to use name
	char *another = "Sean";

	printf("Another: %s\n", another);

	printf("Another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
	
	return 0;
}
