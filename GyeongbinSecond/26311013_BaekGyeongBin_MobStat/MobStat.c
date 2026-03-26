#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetRandom(int minVal, int maxVal)
{
	return minVal + rand() % (maxVal - minVal + 1);
}

void ShowMob1Stat(void)
{
	int hp = GetRandom(10, 30);
	int atk = GetRandom(5, 10);
	printf("[슬라임]\n");
	printf("HP : %d\n", hp);
	printf("ATK : %d\n", atk);
	printf("\n");
}

void ShowMob2Stat(void)
{
	int hp = GetRandom(20, 50);
	int atk = GetRandom(10, 20);
	printf("[고블린]\n");
	printf("HP : %d\n", hp);
	printf("ATK : %d\n", atk);
	printf("\n");
}

void ShowMob3Stat(void)
{
	int hp = GetRandom(40, 80);
	int atk = GetRandom(20, 30);
	printf("[오크]\n");
	printf("HP : %d\n", hp);
	printf("ATK : %d\n", atk);
	printf("\n");
}


int main(void)
{
	srand((unsigned)time(NULL));


	ShowMob1Stat();
	ShowMob2Stat();
	ShowMob3Stat();

	return 0;
}
