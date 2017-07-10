#include <stdio.h>

int main (int argc, char *argv[])
{
	int i=0;
	int first_number=0;
	int second_number=0;
	int third_number=0;
	
	if (argc<4){
		printf("Not enough arguments.\n");
	}else if (argc==4){
		first_number=atoi(argv[1]);
		second_number=atoi(argv[2]);
		third_number=atoi(argv[3]);
		if (first_number>second_number && first_number>third_number){
			printf("The largest number of the three is %d.\n", first_number);
		} else if (second_number>first_number && second_number>third_number){
			printf("The largest number of the three is %d.\n", second_number);
		} else if (third_number>first_number && third_number>second_number){
			printf("The largest number of the three is %d.\n", third_number);
		} else {
			printf("The three numbers are equal.\n");
		}
	} else{
		printf("The values are unacceptable.\n");
	}
	return 0;
}

	
