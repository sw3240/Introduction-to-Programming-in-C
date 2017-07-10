#include <stdio.h>

int main()
{
	int i=0;
	int a=1;
	int n=0;

	printf("input:");
	scanf("%d", &i);
	printf("n:");
	scanf("%d", &n);
	
	a=1<<(n-1);
	
	if (i&a){
		i -= a;
		printf("%d\n", i);
	}else{
		i += a;
		printf("%d\n", i);
	}
}
