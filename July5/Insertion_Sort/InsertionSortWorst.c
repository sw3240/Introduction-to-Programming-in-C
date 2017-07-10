#include <stdio.h>

int main()
{
	int lsize;
	printf("lsize: ");
	scanf("%d", &lsize);
	
	int i, j, k, ph, extract;
	int list[lsize];
	int checknum, swapnum;

	for(i=0; i<lsize; i++)
	{
		list[i]=0;
		list[i] = lsize-i;
		printf("|%d|", list[i]);
	}
	printf("\n");
	for(i=0;i<lsize;i++)
	{
		printf("|%d", list[i]);
	}
	printf("|\n");
	
	for(i=1;i<lsize;i++)
	{
		for(j=i;j>0;j--)
		{
			extract=list[j];
			if(extract<list[j-1])
			{
				printf("|%d,%d|\n", list[j-1], list[j]);
				list[j]=list[j-1];
				list[j-1]=extract;
				
				printf("<%d,%d>\n", list[j-1], list[j]);
				
				swapnum++;
			} else 
			{
				printf("|%d:%d|\n", list[j-1], list[j]);
			}	
			checknum++;
		}
	}
	for(i=0;i<lsize;i++)
	{
		printf("%d, ", list[i]);
	}
	printf("\n");
	
	printf("There were %d checks and %d swaps.", checknum, swapnum);
	return 0;
}
	
