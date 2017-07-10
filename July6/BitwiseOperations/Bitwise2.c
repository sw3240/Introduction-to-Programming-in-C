#include <stdio.h>
//doesn't really work
int main()
{
	int i,a=2,j,b=1;

	printf("input:");
	scanf("%d", &i);
	
	printf("i = %d\n", i);
	
	for (j=0;j<31;j++){
		b=b*a;
	}
	b--;
	printf("b = %d\n", b);
	if (i&b){
		printf("MSB is set!\n");
	}else{
		printf("MSB is not!\n");
	}

}
