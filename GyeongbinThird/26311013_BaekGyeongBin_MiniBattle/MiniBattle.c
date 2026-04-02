#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static const int GAME_EXIT = 0;
static const int GAME_CONTINUE = 1;
static const int PLAYER_HP_MAX ;
static const int PLAYER_ATTACK  ;
static const int PLAYER_DEFENCE ;

int GetRandom(int minVal, int maxVal);

char playerName[32] = { 0 };
int playerHP = 100;
int mobHP = 100;

int main(void)
{
		

	return 0;
}

int GetRandom(int minVal, int maxVal)
{
	return minVal + rand() % (maxVal - minVal + 1);
}