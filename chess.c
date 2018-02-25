#include <stdio.h>

void Deck(char deck[8][8]) 
{
	char k[]={'r','n', 'b', 'q', 'k', 'b', 'n', 'r'};
	for (int s = 0; s < 8; ++s) 
	{
		deck[0][s] = k[s];
		deck[7][s] = k[s]-32;
		deck[1][s] = 'p';
		deck[6][s] = 'p'-32;
		for (int i = 2; i < 6; ++i) 
		{
			deck[i][s] = ' ';
		}
	}
}

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
	Deck(deck);
	printDeck(deck);
}


