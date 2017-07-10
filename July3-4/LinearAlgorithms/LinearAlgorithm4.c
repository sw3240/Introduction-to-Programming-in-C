#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	FILE *fp;
	int number;
	int el_num;
	int *ptr;
	int i;
	int inlist=0;
	
	printf("How many elements do you want in the list?\n");
	scanf("%d", &el_num);

	//creates list1 and list2 and initializes all of the lists' values at 0
	int list1[el_num];
	int list2[el_num];
	for (i=0;i<el_num;i++){
		list1[i] = 0;
		list2[i] = 0;
	}
	//opens file.txt and prints the numbers to the file
	fp = fopen("random_numbers_list.txt", "w");

	for (i=0;i<el_num;i++){
		list1[i] = rand() % 100;
		fprintf(fp, "%d, ", list1[i]); 
		
		//printf("%d|", list1[i]);
	}
	fprintf(fp, "\n");
	fclose(fp);
	//printf("\n-----------\n");
	//opens file.txt for reading and scans/reads from the file, then prints the numbers
	fp = fopen("random_numbers_list.txt", "r");
	
	for (i=0;i<el_num;i++){
		fscanf(fp, "%d, ", &list2[i]);
		printf("%d|", list2[i]);
	}
	//Begin search for element
	printf("\nChoose your number:\n");
	scanf("%d", &number);
	clock_t begin = clock();
	for (i=0;i<el_num;i++){
		if (number==list2[i]){
			inlist = 1;
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
