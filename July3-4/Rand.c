#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, x, el_num;

	printf("el_num:");
	scanf("%d", &el_num);
	for (i=0;i<el_num;i++){
		x = rand() % 1000;
		printf("%d\n", x);
	}
	return 0;
}
