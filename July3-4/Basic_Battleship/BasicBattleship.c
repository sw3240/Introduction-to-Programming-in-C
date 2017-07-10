#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, int argv)
{
	char shiplistalpha[] = "abcdefghijklmnopqrstuvwxyz";
	char shipalpha = 'a';
	int i, ifhit=0, shipnum;
	char hitalpha = 'a', input = 'a';
	clock_t seconds = clock();
	int any;

	printf("Type any number to begin.\n");
	scanf("%d", &any);
	printf("%d\n",any);

	shipnum = ((rand()*seconds) % 26) + 1;
	printf("Hit SHIP NO.#%d of 26 ships by guessing the corresponding letter.\n", shipnum);
	shipalpha = shiplistalpha[2];
	//[((rand()*seconds*seconds) % 26) + 1];
	
	printf("shipnum = %d\n", shipnum);
	printf("shipalpha = %c\n", shipalpha);

	while (ifhit==0)
	{
		printf("Select your letter:\n");
		scanf("%c", &input);
		hitalpha = input;
		
		if (hitalpha == shipalpha)
		{
			ifhit = 1;
			printf("You hit SHIP %d!\n", shipnum);
		} 
		else //if (hitalpha != shipalpha)
		{
			printf("You missed!\n");
			//break;
		}
	}
	return 0;
}
