#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GameOddEven(void);
int GetRandom(int minVal, int maxVal)
{
	return minVal + rand() % (maxVal - minVal + 1);
}

int main(void)
{
	srand((unsigned int)time(NULL));

	GameOddEven();



	return 0;
}

void GameOddEven(void)
{
	int compNum = GetRandom(10,90);
	int result = 0;
	int compResult = 0;
	char player;

	printf("=== È¦Â¦ °ÔÀÓ ===\n");
	printf("E/e: Â¦¼ö, O/o: È¦¼ö, Q/q: Á¾·á\n");
	printf("ÀÔ·Â: ");

	if (scanf(" %c", &player) != 1) {
		printf("ÀÔ·Â ¿À·ù!\n");
		exit(1);
	}

	if (player == 'Q' || player == 'q')
	{
		printf("Á¾·á");
		exit(0);
	}
	if (player == 'E' || player == 'e')
	{
		printf("Â¦¼ö ¼±ÅÃ\n");
		result = 0;
	}

	if (player == 'O' || player == 'o')
	{
		printf("È¦¼ö ¼±ÅÃ\n");
		result = 1;
	}

	if (compNum % 2 != 0)
	{
		printf("°ª : %d\n", compNum);
		printf("°ªÀº È¦¼ö\n");
		compResult = 1;
	}

	if (compNum % 2 == 0)
	{
		printf("°ª : %d\n", compNum);
		printf("°ªÀº Â¦¼ö\n");
		compResult = 0;
	}

	if (compResult == result)
	{
		printf("½Â¸®!\n");
	}
	else
	{
		printf("ÆÐ¹è!\n");
	}
}