#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int n_check[10];
	
	for (i=1; i<10; i++){
		n_check[i] = 0;
	}
	for (i=1; i<argc; i++){
		n_check[atoi(argv[i])]++;
	}
	for (i=1; i<10; i++){
		if (n_check[i]=1){
			printf("%d\n", n_check[i]);
		}
	}
	
	return 0;
}
