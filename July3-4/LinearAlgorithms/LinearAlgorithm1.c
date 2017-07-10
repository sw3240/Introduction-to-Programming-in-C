#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int list[10] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, };
	int number=0;
	int inlist=0;
	int i=0;
	

	printf("number:");
	scanf("%d", &number);

	for (i=0;i<10;i++){
		if (number==list[i]){
			inlist=1;
		} else {}
	}
	if (inlist==1){
		printf("The number %d is in the list.\n", number);
		
	} else {printf("The number %d is not in the list\n", number);}
	return 0;
}
