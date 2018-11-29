#include<stdio.h>
#include<stdlib.h>
#include <time.h>
char whoseFirst();
char whoseSecond(char firstPlayer);
void putChess(char *p,char player);
int checkPlace(int num,char *p);
int checkWin(char *p);
int checkLine(char *p);
int checkWay(char *p);
int checkDia(char *p);
void printBoard(char *p);
int main()
{
	int i;
	int firstPlayer = whoseFirst();
	char *a = (char*)malloc(9 * sizeof(char));
	for (i = 0; i < 9; i++)
	{
		if (i % 2 == 1) {
			putChess(a, firstPlayer);
		}
		else
		{
			putChess(a, whoseSecond(firstPlayer));
		}
		
		if (checkWin(a)) {
			if (i % 2 == 1) {
				printf("First player win\n");
			}
			else
			{
				printf("Second player win\n");
			}
			break;
		}
		else {
			continue;
		}
	}
	free(a);
	return 0;
}

char whoseFirst()
{
	srand((unsigned int)time(NULL));
	int random;
	random = rand() % 10 + 1;
	if (random % 2 == 1)
	{
		printf("player A play first\n");
		return 'a';
	}
	else
	{
		printf("player B play first\n");
		return 'b';
	}
}
char whoseSecond(char firstPlayer)
{
	if (firstPlayer == 'a')
	{
		return 'b';
	}
	else
	{
		return 'a';
	}
}
int checkPlace(int num, char *p)
{
	printBoard(p);
	int isfalse = 0;
	if (num > 9 || num < 1)
	{
		printf("not in the chessboard\n");
		isfalse = 1;
	}
	if ((*(p + num) == 'a')||(*(p + num) == 'b'))
	{
		printf("this place is occupied\n");
		isfalse = 1;
	}
	return isfalse;
}
void putChess(char *p, char player)
{
	int num;
	do {
		scanf_s("%d", &num);
		checkPlace(num, p);
	} while (checkPlace(num, p));
	*(p + num - 1) = player;
	printBoard(p);
}
int checkWin(char *p)
{
	int isWin = 0;
	if (checkLine(p) == 1 || checkWay(p) == 1 || checkDia(p) == 1)
	{
		isWin =1 ;
	}
	return isWin;
}
int checkLine(char *p)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		if ((*(p + 3 * i) == *(p + 3 * i + 1)) && (*(p + 3 * i + 1) == *(p + 3 * i + 2)))
			return 1;
		else
			return 0;
	}
}
int checkWay(char *p)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		if ((*(p + i) == *(p + 3 + i)) && (*(p + 3 + i) == *(p + 6 + i)))
			return 1;
		else
			return 0;
	}
}
int checkDia(char *p)
{
	if ((*(p) == *(p + 4)) && (*(p + 4) == *(p + 8)))
		return 1;
	else if ((*(p + 2) == *(p + 4)) && (*(p + 4) == *(p + 6)))
		return 1;
	else
		return 0;
}
void printBoard(char *p)
{
	int i,j;
	for (i = 0; i < 3; i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", *(p +3 * i + j));
		}
		printf("\n");
	}
}