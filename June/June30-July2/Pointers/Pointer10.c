#include <stdio.h>

int main(int argc, char *argv[])
{
	char input[256];
	int i=0;
	char *p = input;
	
	printf("input string:");
	scanf("%s", &input);
	
	p = &input[i];
	while (*p != '\0'){
		i++;
		p = &input[i];
	}
	printf("size = %d\n", i);
	return 0;

}


