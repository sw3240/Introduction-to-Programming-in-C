#include <stdio.h>

int main()
{
	int lsize;
	printf("lsize: ");
	scanf("%d", &lsize);
	int ln, rn, i, j, k, list[lsize];
	int checknum=0, swapnum=0;
	
	for(i=0; i<lsize; i++)
	{
		list[i]=0;
		printf("input %d: ", i+1);
		scanf("%d", &list[i]);
	}
	for(j=0; j<lsize; j++)
	{
		for(i=0; i<(lsize-j); i++)
		{
			ln = list[i];
			rn = list[i+1];
			if (ln>rn)
			{
				list[i]=rn;
				list[i+1]=ln;
				swapnum++;
			}
			//printf("|%d, %d|\n", ln, rn);
			checknum++;
		}
	}
	printf("list = ");
	for(i=0; i<lsize; i++)
	{
		printf("%d, ", list[i]);
	}
	printf("\n");
	printf("There were %d checks and %d swaps.", checknum, swapnum);
	return 0;
}
