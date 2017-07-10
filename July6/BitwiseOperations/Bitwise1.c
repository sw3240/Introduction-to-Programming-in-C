#include <stdio.h>

int main()
{
	int i=0;
	int a=1;

	printf("input:");
	scanf("%d", &i);
	
	if (i&a){
		printf("LSB is set!\n");
	}else{
		printf("LSB is not!\n");
	}
}
