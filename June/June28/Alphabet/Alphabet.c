#include <stdio.h>

int main(int argc, char *argv[])
{

	int a_count=0;
	char alphabet[]="abcdefghijklmnopqrstuvwxyz";

	while (a_count<=26){
		printf("%c\n", alphabet[a_count]);
		a_count++;
	}
	return 0;
}
		
