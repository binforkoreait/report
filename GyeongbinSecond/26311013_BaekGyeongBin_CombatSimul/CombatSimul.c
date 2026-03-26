#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 전역함수
int playerHp = 1000;
int playerMp = 500;

int GetRandom(int minVal, int maxVal)
{
	return minVal + rand() % (maxVal - minVal + 1);
}


void ShowPlayerStat(void)
{
	printf("전투 전 상태 -----------------\n");
	printf("HP : %d\n", playerHp);
	printf("MP : %d\n", playerMp);
}

int TakeDamage(int damage)
{
	printf("피해 입음 : %d\n", damage);
	playerHp = (playerHp - damage > 0) ? playerHp - damage : 0;

	return damage;
}

int UseMp(int amount)
{
	printf("MP 사용 : %d\n", amount);
	playerMp = (playerMp - amount > 0) ? playerMp - amount : 0;

	return amount;
}

int main(void)
{
	srand((unsigned int)time(NULL));

	ShowPlayerStat();

	TakeDamage(GetRandom(1, 1001));

	UseMp(GetRandom(1,501));

	printf("\n전투 후 상태 -----------------\n");
	printf("HP : %d\n", playerHp);
	printf("MP : %d\n", playerMp);


	return 0;
}