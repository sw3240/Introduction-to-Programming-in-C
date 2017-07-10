#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int i=0;
	int number=0;
	
	if (argc==1){
		printf("Not enough arguments.\n");
	} else if (argc==2){
		number = atoi(argv[1]);
		if (number==1){
			printf("Monday\n");
		} else if (number==2){
			printf("Tuesday\n");
		} else if (number==3){
			printf("Wednesday\n");
		} else if (number==4){
			printf("Thursday\n");
		} else if (number==5){
			printf("Friday\n");
		} else {
			printf("The number is invalid.\n");
		}
	} else {
		printf("Too many arguments.\n");
	}
	return 0;
}
