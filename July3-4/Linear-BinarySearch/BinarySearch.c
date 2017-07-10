#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int number, num_el, i, n, low, high, mid, location, inlist;

	printf("How many elements do you want in the list?\n");
	scanf("%d", &num_el);
	
	int list[num_el];

	for (i=0;i<num_el;i++){
		list[i] = 0;
	}
	for (i=0;i<num_el;i++){
		list[i] = i;
		printf("%d|", list[i]);
	}

	printf("\nChoose your number:\n");
	scanf("%d", &number);
	clock_t begin = clock();
	
	for(n=0;n<10;n++){
		low = list[0];
		high = list[num_el-1];
		mid = (low+high)/2;
		while(1){
			if (number>mid && number<=list[num_el-1]){
				low=mid+1;
				//high=high;
				mid=(low+high)/2;
				printf("Erase lower list\n");
			} else if (number<mid && number>list[0]){
				//low=low;
				high=mid-1;
				mid=(low+high)/2;
				printf("Erase upper list\n");
			} else if (number==mid){
				inlist=1;
				printf("Located!\n");
				break;
			} else {
				printf("Not in original list!");
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
