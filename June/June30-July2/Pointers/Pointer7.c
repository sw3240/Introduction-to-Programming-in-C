#include <stdio.h>

int main(int argc, char *argv[])
{
	int array[] = {5, 7, 2, 9, 8};
	int *p;
	int i=0;
	
	for(i=0;i<5;i++){
		p = &array[i];
		*p = array[i];
		printf("%d\n", *p);
	}
}
