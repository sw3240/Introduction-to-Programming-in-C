#include <stdio.h>
#include <stdio.h>

int max(int num1, int num2)
{
	if (num1>num2){
		return(num1);
	} else if (num1<num2){
		return(num2);
	}
}
int min(int num1, int num2)
{
	if (num1<num2){
		return(num1);
	} else if (num1>num2){
		return(num2);
	}
}


int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int ma, mi = num1;
	
	ma = max(num1, num2);
	mi = min(num1, num2);
	
	printf("max = %d\n", ma);
	printf("min = %d\n", mi);
	
	return 0;
}
