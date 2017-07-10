#include <stdio.h>

int main()
{
	int list[10];
	int i=0;
	int number=0;
	int inlist=0;
	
	printf("Create your list!\n");
	for (i=0;i<10;i++){
		printf("Element %d:", i+1);
		scanf("%d", &list[i]);
	}
	printf("\nHere is your list:\n");
	for (i=0;i<10;i++){
		printf("%d, ", list[i]);
	}
	printf("\nWhat number would you like to detect for existence within the list?\n");
	scanf("%d", &number);

	for (i=0;i<10;i++){
		if (number == list[i]){
			inlist=1;
		}
	}
	if(inlist==1){
		printf("The number is in the list!\n");
	} else {
		printf("The number is not in the list!\n");
	}
	return 0;
}
