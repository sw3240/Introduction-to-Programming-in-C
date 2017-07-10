#include <stdio.h>

int main (int argc, char *argv[])
{
	int intlist[3] = {29, 34, 7};
	int m = intlist[0];
	int *ab;
	int i=0;

	for (i=0; i<3; i++){
		ab = &m;
		printf("address(ab) = %p\ncontent = %d\n", ab, m);
		m = intlist[i+1];
	}
	return 0;
}
