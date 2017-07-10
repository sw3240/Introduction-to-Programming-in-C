#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float number=0.0;

	if (argc==1){
		printf("Not enough arguments.\n");
	} else if (argc==2){
		number = atof(argv[1]);
		if (number>0.0){
			printf("The number is positive.\n");
		}else if (number<0.0){
			printf("The number is negative.\n");
		}else if (number==0.0){
			printf("The number is neither positive or negative.\n");
		}else
			printf("The number is not an integer.\n");

	} else {
		printf("Too many arguments.\n");
	}
	return 0;
}
