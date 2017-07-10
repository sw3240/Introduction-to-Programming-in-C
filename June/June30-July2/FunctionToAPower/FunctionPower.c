#include <stdio.h>
	
int power(int x, int y)
{
	int i, out = 1;
	for (i=0;i<y;i++){
		out = out * x;
	}
	return (out);
}
int main()
{
	int number;
	int exponent;
	int result;
	printf("number:");
	scanf("%d", &number);
	printf("exponent:");
	scanf("%d", &exponent);

	result = power(number, exponent);
	printf("%d\n", result);
	return 0;
}
