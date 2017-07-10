#include <stdio.h>

int main (int argc, char *argv[])
{
	int i=0;
	int first_number=0;
	int second_number=0;
	
	if (argc==1 || argc==2){
		printf("Not enough arguments.\n");
	}else if (argc==3){
		first_number=atoi(argv[1]);
		second_number=atoi(argv[2]);
		if (first_number>second_number){
			printf("The largest number of the two is %d.\n", first_number);
		} else if (first_number<second_number){
			printf("The largest number of the two is %d.\n", second_number);
		} else {
			printf("The two numbers are equal.\n");
		}
	} else{
		printf("The values are unacceptable.\n");
	}
	return 0;
}

	
