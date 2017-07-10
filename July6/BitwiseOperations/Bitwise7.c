#include <stdio.h>

int main()
{
	int a=0;
	int i=0;
	int n=0;

	printf("input: ");
	scanf("%d", &i);
	
	while(a&i){
		i=4;
		printf("%d\n", i);
		n++;
	}
	printf("the highest set bit is in place %d.\n", n);
}
