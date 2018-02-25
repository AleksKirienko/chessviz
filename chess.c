#include <stdio.h>

void printDeck(char deck[8][8]) 
{
	for (int n = 0; n < 8; ++n)
	{
		for (int s = 0; s < 8; ++s) 
		{
			printf("%c ",deck[n][s]);

		}
		printf("\n");
	}
}

int main() 
{
	char deck[8][8];
	printDeck(deck);
}
