#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int number;
	int el_num;
	int i, n;
	int inlist=0;
	
	
	printf("How many elements do you want in the list?\n");
	scanf("%d", &el_num);
	int list[el_num];
	for (i=0;i<el_num;i++){
		list[i] = 0;
	}
	for (i=0;i<el_num;i++){
		list[i] = i;
		printf("%d|", list[i]);
	}
	
	printf("\nChoose your number:\n");
	scanf("%d", &number);
	clock_t begin = clock();
	
	for(n=0;n<10;n++){
		for (i=0;i<el_num;i++){
			if (number==list[i]){
				inlist = 1;
				break;
			}
		}
	}
	clock_t end = clock();
	if (inlist == 1){
		printf("INLIST IS TRUE!\n");
	} else {
		printf("INLIST IS FALSE!\n");
	}
	double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
	printf("%f secs\n", time_spent);
	return 0;
}
