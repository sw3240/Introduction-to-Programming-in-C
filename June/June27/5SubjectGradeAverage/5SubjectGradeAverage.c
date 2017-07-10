#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	float grade_average=0.0;
	
	if (argc!=6){
		printf("Incorrect number of arguments!\n");
	}else if (argc==6){
		grade_average= (atof(argv[1]) + atof(argv[2]) + atof(argv[3]) + atof(argv[4]) + atof(argv[5]))/5;
		if (grade_average>=90){
			printf("A\n");		
		}else if (grade_average<90 && grade_average>=80){
			printf("B\n");
		}else if (grade_average<80 && grade_average>=70){
			printf("C\n");
		}else if (grade_average<70 && grade_average>=60){
			printf("D\n");
		}else if (grade_average<60){
			printf("F\n");
		}
	}
	return 0;
}
