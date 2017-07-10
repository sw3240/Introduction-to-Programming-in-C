#include <stdio.h>

int main(int argc, char *argv)
{
	char str[] = "Sean";
	int length = 0;

	while (str[length]!='\0'){
		length++;
	}
	printf("The length of string \"Sean\" is %d.\n", length);
	return 0;
}
