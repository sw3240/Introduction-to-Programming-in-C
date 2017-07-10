#include <stdio.h>

int main()
{
	int a,msb;

	printf("input:");
	scanf("%d", &a);
	
	msb = 1 << (sizeof(int)*8 - 1);	

	if (a&msb){
		printf("MSB is set!\n");
	}else{
		printf("MSB is not!\n");
	}

}
