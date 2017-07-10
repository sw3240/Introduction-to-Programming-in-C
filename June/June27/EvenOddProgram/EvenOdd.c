#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int i=0;
	//float number=0.0;
	int number =0;
	
	if (argc==1 || argc >2){
		printf("Incorrect number of arguments.\n");
	}else if (argc==2){
		number=atoi(argv[1]);
		if (number%2==0){
			printf("The number is even.\n");
		}else if (number%2==1){
			printf("The number is odd.\n");
		}

		/*if (celif(number)==1){
			number = Math.round(number);
			if (number%2==0){
				printf("The number is even.\n");
			}else if (number%2==1){
				printf("The number is odd,\n");
			}
		} else {
			printf("The number is not an integer");
		}*/
	}
	return 0;
}
	
