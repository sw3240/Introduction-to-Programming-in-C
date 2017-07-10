#include <stdio.h>
#include <stdlib.h>
//This is the program created by Nik, my program is "UnitPricing.c"
int main (int argc, char *argv[])
{
	//It seems that it is unneccessary to equate the variables to a value when declaring their type.
	int units;
	float amount, surcharge = 0.2;

	units = atoi(argv[1]);
	if (units <= 50){
		amount = units * 0.5;
	//Here, Nik does not include "&& units > 50" and he notes that it is unneccessary. 
	}else if (units <= 150){
		amount = (units - 50) * 0.75 + 25;
	}else if (units <= 250){
		amount = (units - 150) * 1.20 + 75 + 25;
	}else {
		amount = (units - 250) * 1.50 + 120 + 75 + 25;
	}
	//Nik changes the problem for the surcharge to apply for all unit inputs instead of only those above 250.
	amount = amount*(surcharge + 1);

	printf("Your bill is $%f.\n", amount);
	return 0;
}


