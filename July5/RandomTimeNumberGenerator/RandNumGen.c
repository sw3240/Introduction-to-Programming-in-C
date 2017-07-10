#include <stdio.h>
#include <time.h>

int main()
{
	clock_t time = clock();
	int lsize;
	printf("lsize: ");
	scanf("%d", &lsize);

	int list[lsize];
	int i,n;

	printf("range from 0 to n: ");
	scanf("%d", &n);

	for(i=0;i<lsize;i++)
	{
		list[i] = (rand()*time+16)%n;
	}
	for(i=0;i<lsize;i++)
	{
		printf("|%d|", list[i]);
	}
	printf("\n");
	return 0;
}
