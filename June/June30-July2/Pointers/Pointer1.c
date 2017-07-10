#include <stdio.h>

int main(int argc, char *argv[])
{
	char list[] = { 'm', 'n', 'o', 'z'};
	int count = sizeof(list)/sizeof(char);
	int m = 10;
	int i;
	char *z;

	for(i=0; i<count; i++){
		z = &list[i];
		printf("%p is the address of %c.\n", z, list[i]);
	}
	return 0;
}
