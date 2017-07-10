#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	float units = 0.0;
	float unit_cost = 0.0;
	
	if (argc!=2){
		printf("Incorrect number of arguments!\n");
	}else if (argc==2){
		units=atof(argv[1]);
		if (units<0){
			printf("Impossible!\n");
		}else if (units <= 50 && units >= 0){
			unit_cost = units * 0.5;
			printf("$%f\n", unit_cost);
		}else if (units <= 150 && units > 50){
			unit_cost = (units - 50) * 0.75 + 25;
			printf("$%f\n", unit_cost);
		}else if (units <= 250 && units > 150){
			unit_cost = (units - 150) * 1.2 + 75 + 25;
			printf("$%f\n", unit_cost);
		}else if (units > 250){
			unit_cost = ((units - 250) * 1.5 + 120 + 75 + 25) * 1.2;
			printf("$%f\n", unit_cost);
		}
	}
	return 0;
}
