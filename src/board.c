#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "board.h"
#include "board_print.h"
#include "board_print_plain.h"
void check (char deck [8][8])
{
	char move[5];
	int chiselko=0, tmp1, tmp2;
	scanf("%s", move);
//printf("%d %d %d %d %d %d\n", move[1] - '0',move[0] - 'a' + 1,move[3] - '0',move[2] - 'a' + 1,abs(move[0] - move[2]),abs(move[1] - move[3]));

//Pesh
	if ((deck[move[3] - '0'][move[2] - 'a' + 1] == ' ')  && ((move[0] - 'a' + 1)>0) && ((move[0] - 'a' + 1)<10) && ((move[1] - '0')>0) && ((move[1] - '0')<10) && ((move[2] - 'a' + 1)>0) && ((move[2] - 'a' + 1)<10) && ((move[3] - '0')>0) && ((move[3] - '0')<10))
	{
		if ((deck[move[1] - '0'][move[0] - 'a' + 1] == 'p') && (move[0] == move[2]) && (((move[3] - move[1]) == 1) || ((move[3] - move[1]) == 2)))
		{
			deck[move[3] - '0'][move[2] - 'a' + 1] = 'p';
			deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
		}
		if ((deck[move[1] - '0'][move[0] - 'a' + 1] == 'P') && (move[0] == move[2]) && (((move[1] - move[3]) == 1) || ((move[1] - move[3]) == 2)))
		{
			deck[move[3] - '0'][move[2] - 'a' + 1] = 'P';
			deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
		}


//Королева

		if (((deck[move[1] - '0'][move[0] - 'a' + 1] == 'q') || (deck[move[1] - '0'][move[0] - 'a' + 1] == 'Q'))&& ((move[0] == move[2]) || (move[1] == move[3]) || (abs(move[0] - move[2]) == abs(move[1] - move[3]))))

		{
			if(move[0]==move[2])
	for (tmp1 = move[1] - '0' + 1; tmp1 < move[3] - '0'; tmp1++)
			{
				if (deck[tmp1][move[0] - 'a' + 1] != ' ')
				{
					if (abs(deck[move[1] - '0'][move[0] - 'a' + 1] - deck[tmp1][move[0] - 'a' + 1]) > 17) deck[tmp1][move[0] - 'a' + 1] = ' '; 
					else chiselko = 1;
				}
			}
else if (move[1]==move[3])
		for (tmp2 = move[0] - 'a' + 2; tmp2 < move[2] - 'a' + 1; tmp2++)
			{
				if (deck[move[1] - '0'][tmp2] != ' ')
				{
					if (abs(deck[move[1] - '0'][move[0] - 'a' + 1] - deck[move[1] - '0'][tmp2]) > 17) deck[move[1] - '0'][tmp2] = ' '; 
					else chiselko = 1;
				}
			}
if (abs(move[0] - move[2]) == abs(move[1] - move[3])) 
{
for (tmp1 = move[1] - '0' + 1,  tmp2 = move[0] - 'a' + 2; tmp1 < move[3] - '0'; tmp1++, tmp2++)
			{
				if (deck[tmp1][tmp2] != ' ')
				{
					if (abs(deck[move[1] - '0'][move[0] - 'a' + 1] - deck[tmp1][tmp2]) > 17) deck[tmp1][tmp2] = ' '; 
					else chiselko = 1;
				}
			}
}
			if (chiselko <1 || chiselko>1)
			{

				if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'Q')
				{
					deck[move[3] - '0'][move[2] - 'a' + 1] = 'Q';
					deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
				}
				if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'q')
				{
					deck[move[3] - '0'][move[2] - 'a' + 1] = 'q';
					deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
				}
				chiselko=0;

				}
		}

//Ладья

		if (((deck[move[1] - '0'][move[0] - 'a' + 1] == 'B') || (deck[move[1] - '0'][move[0] - 'a' + 1] == 'b')) && (abs(move[0] - move[2]) == abs(move[1] - move[3])))
		{
		for (tmp1 = move[1] - '0' + 1,  tmp2 = move[0] - 'a' + 2; tmp1 < move[3] - '0'; tmp1++, tmp2++)
			{
				if (deck[tmp1][tmp2] != ' ')
				{
					if (abs(deck[move[1] - '0'][move[0] - 'a' + 1] - deck[tmp1][tmp2]) > 17) deck[tmp1][tmp2] = ' '; 
					else chiselko = 1;
				}
			}

			if (chiselko <1 || chiselko>1)
			{
				if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'B')
				{
					deck[move[3] - '0'][move[2] - 'a' + 1] = 'B';
					deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
				}
				if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'b')
				{
					deck[move[3] - '0'][move[2] - 'a' + 1] = 'b';
					deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
				}
				chiselko=0;

			}

		}

//Слоник

		if (((deck[move[1] - '0'][move[0] - 'a' + 1] == 'R') || (deck[move[1] - '0'][move[0] - 'a' + 1] == 'r')) && ((move[0] == move[2]) || (move[1] == move[3])))
		{
if(move[0]==move[2])
	for (tmp1 = move[1] - '0' + 1; tmp1 < move[3] - '0'; tmp1++)
			{
				if (deck[tmp1][move[0] - 'a' + 1] != ' ')
				{
					if (abs(deck[move[1] - '0'][move[0] - 'a' + 1] - deck[tmp1][move[0] - 'a' + 1]) > 17) deck[tmp1][move[0] - 'a' + 1] = ' '; 
					else chiselko = 1;
				}
			}
else if (move[1]==move[3])
		for (tmp2 = move[0] - 'a' + 2; tmp2 < move[2] - 'a' + 1; tmp2++)
			{
				if (deck[move[1] - '0'][tmp2] != ' ')
				{
					if (abs(deck[move[1] - '0'][move[0] - 'a' + 1] - deck[move[1] - '0'][tmp2]) > 17) deck[move[1] - '0'][tmp2] = ' '; 
					else chiselko = 1;
				}
			}
			if (chiselko <1 || chiselko>1)
			{
				if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'R')
				{
					deck[move[3] - '0'][move[2] - 'a' + 1] = 'R';
					deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
				}
				if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'r')
				{
					deck[move[3] - '0'][move[2] - 'a' + 1] = 'r';
					deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
				}
			}
		chiselko=0;

		}
//Конь

		if ( ((deck[move[1] - '0'][move[0] - 'a' + 1] == 'N') || (deck[move[1] - '0'][move[0] - 'a' + 1] == 'n')) && ( ((abs(move[1] - move[3]) == 1) && (abs(move[0] - move[2]) == 2)) || ((abs(move[1] - move[3]) == 2) && (abs(move[0] - move[2]) == 1)) ) )
{
	if (chiselko <1 || chiselko>1)
	{
			if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'N')
			{
				deck[move[3] - '0'][move[2] - 'a' + 1] = 'N';
				deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
			}
			if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'n')
			{
				deck[move[3] - '0'][move[2] - 'a' + 1] = 'n';
				deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
			}
	}
 	
}
if ((deck[move[1] - '0'][move[0] - 'a' + 1] == 'k') && (((abs(move[3] - move[1]) == 1) || (abs(move[3] - move[1]) == 0)) && ((abs(move[3] - move[1]) == 1) || (abs(move[3] - move[1]) == 0))))
		{
			deck[move[3] - '0'][move[2] - 'a' + 1] = 'k';
			deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
		}
		if ((deck[move[1] - '0'][move[0] - 'a' + 1] == 'K') && (((abs(move[3] - move[1]) == 1) || (abs(move[3] - move[1]) == 0)) && ((abs(move[3] - move[1]) == 1) || (abs(move[3] - move[1]) == 0))))
		{
			deck[move[3] - '0'][move[2] - 'a' + 1] = 'K';
			deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
		}
}
//King
	else if (((move[0] - 'a' + 1)>0) && ((move[0] - 'a' + 1)<10) && ((move[1] - '0')>0) && ((move[1] - '0')<10) && ((move[2] - 'a' + 1)>0) && ((move[2] - 'a' + 1)<10) && ((move[3] - '0')>0) && ((move[3] - '0')<10))
	{
	if (deck[move[3] - '0'][move[2] - 'a' + 1] != ' ') 
{
		if (abs(deck[move[1] - '0'][move[0] - 'a' + 1] - deck[move[3] - '0'][move[2] - 'a' + 1] ) > 17) deck[move[3] - '0'][move[2] - 'a' + 1]  = ' '; 
					else chiselko = 1;
}
					if (chiselko <1 || chiselko>1)
					{
		if ((deck[move[1] - '0'][move[0] - 'a' + 1] == 'k') && (((abs(move[3] - move[1]) == 1) || (abs(move[3] - move[1]) == 0)) && ((abs(move[3] - move[1]) == 1) || (abs(move[3] - move[1]) == 0))))
		{
			deck[move[3] - '0'][move[2] - 'a' + 1] = 'k';
			deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
		}
		if ((deck[move[1] - '0'][move[0] - 'a' + 1] == 'K') && (((abs(move[3] - move[1]) == 1) || (abs(move[3] - move[1]) == 0)) && ((abs(move[3] - move[1]) == 1) || (abs(move[3] - move[1]) == 0))))
		{
			deck[move[3] - '0'][move[2] - 'a' + 1] = 'K';
			deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
		}

		}
chiselko=0;
//Конь
		if ( ((deck[move[1] - '0'][move[0] - 'a' + 1] == 'N') || (deck[move[1] - '0'][move[0] - 'a' + 1] == 'n')) && ( ((abs(move[1] - move[3]) == 1) && (abs(move[0] - move[2]) == 2)) || ((abs(move[1] - move[3]) == 2) && (abs(move[0] - move[2]) == 1)) ) )
{
if (deck[move[3] - '0'][move[2] - 'a' + 1] != ' ') 
{
		if (abs(deck[move[1] - '0'][move[0] - 'a' + 1] - deck[move[3] - '0'][move[2] - 'a' + 1] ) > 17) deck[move[3] - '0'][move[2] - 'a' + 1]  = ' '; 
					else chiselko = 1;
}
	if (chiselko <1 || chiselko>1)
	{
			if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'N')
			{
				deck[move[3] - '0'][move[2] - 'a' + 1] = 'N';
				deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
			}
			if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'n')
			{
				deck[move[3] - '0'][move[2] - 'a' + 1] = 'n';
				deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
			}
	}
 	
}
			chiselko=0;
//Pesh

if ( (((deck[move[1] - '0'][move[0] - 'a' + 1] == 'P') && (move[3]-move[1]==1)) ||( (deck[move[1] - '0'][move[0] - 'a' + 1] == 'p')&& (move[1]-move[3]==1))) && (abs(move[0]-move[2])))
{	
if (deck[move[3] - '0'][move[2] - 'a' + 1] != ' ') 
{
		if (abs(deck[move[1] - '0'][move[0] - 'a' + 1] - deck[move[3] - '0'][move[2] - 'a' + 1] ) > 17) deck[move[3] - '0'][move[2] - 'a' + 1]  = ' '; 
					else chiselko = 1;
}

if (chiselko <1 || chiselko>1)
	{
		if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'p')
		{
			deck[move[3] - '0'][move[2] - 'a' + 1] = 'p';
			deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
		}
		if (deck[move[1] - '0'][move[0] - 'a' + 1] == 'P')
		{
			deck[move[3] - '0'][move[2] - 'a' + 1] = 'P';
			deck[move[1] - '0'][move[0] - 'a' + 1] = ' ';
		}
chiselko=0;
}
}
}
}


