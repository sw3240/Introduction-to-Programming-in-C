#include <stdio.h>

int main()
{
	int lsize;
	printf("lsize: ");
	scanf("%d", &lsize);
	//int lsize=5;
	int list[lsize];
	int input;
	int i, j, k;
	int min, max=0;
	int pholder;
	int minid;
	int checknum=0, swapnum=0;

	for(i=0; i<lsize; i++)
	{
		//printf("input %d: ", i+1);
		//scanf("%d", &list[i]);
		list[i] = i+1;
		printf("|%d|", list[i]);
	}
	//find max
	for(i=0;i<lsize;i++)
	{
		if (list[i]>max)
		{
			max = list[i];
		}
	}	
	min=max;
	//printf("|%d|\n", max);
	//find mins in order
	for(j=0;j<lsize;j++)
	{
		for(k=j;k<lsize;k++)
		{
			if (list[k]<=min)
			{
				min=list[k];
				minid=k;
				swapnum++;
				//printf("|%d|", list[minid]);
			}
			//printf("|%d|", list[k]);
			checknum++;	
		}
		pholder=list[j];
		list[j]=list[minid];
		list[minid]=pholder;
		min=max;
		
	}
	printf("\nlist: ");
	for (i=0;i<lsize;i++){
		printf("%d, ", list[i]);
	}
	printf("\n");
	printf("There were %d checks and %d swaps.\n", checknum, swapnum);
	
	return 0;
}
