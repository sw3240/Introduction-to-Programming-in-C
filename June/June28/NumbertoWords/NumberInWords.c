#include <stdio.h>

int main (int argc, char *argv[])
{
	int number = atoi(argv[1]);
	char tens_places[3][9] = {"ten(s)", "hundred", "thousand"};
	char digits[10][6] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int d_last = 0;
	int place_counter = 1;
	int word_corresponder[5];
	int d_number = atoi(argv[1]);
	int d_count = 0;
	int p_count = 0;
/*
	const char tens_places[3];
		tens_places[0] = "ten(s)";
		tens_places[1] = "hundred";
		tens_places[2] = "thousand";
	const char digits[10];
		digits[0] = "zero";
		digits[1] = "one";
		digits[2] = "two";
		digits[3] = "three";
		digits[4] = "four";
		digits[5] = "five";
		digits[6] = "six";
		digits[7] = "seven";
		digits[8] = "eight";
		digits[9] = "nine";
*/
	while (d_number != 0){
		d_number=d_number/10;
		d_count++;
	}
	
	while (number>0){
		d_last = number%10;
		word_corresponder[place_counter-1] = d_last;
		number /= 10;
		place_counter++;
	}
	while (d_count>1){
		printf("%s %s ", digits[word_corresponder[d_count-1]], tens_places[d_count-2]);
		d_count--;
	}
	printf("and %s.\n", digits[word_corresponder[d_count-1]]);
	
	return 0;
}

