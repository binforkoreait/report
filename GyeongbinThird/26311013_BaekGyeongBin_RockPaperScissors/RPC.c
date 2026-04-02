#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetRandom(int minVal, int maxVal)
{
	return minVal + rand() % (maxVal - minVal + 1);
}

void GameRPC(void);

int main(void)
{
	srand((unsigned int)time(NULL));

	GameRPC();

	return 0;
}

void GameRPC(void)
{
	int playerHand = 0;
	int compHand = GetRandom(1, 3);

	printf("가위바위보 게임입니다.\n");
	printf("1은 바위, 2는 가위, 3은 보 입니다.\n");
	printf("숫자를 내주세요 :");
	scanf("%d", &playerHand);

	if (playerHand < 1 || playerHand > 3)
	{
		printf("잘못된 값입니다. 당신의 패배입니다.");
		return;
	}

	const char* names[] = { "", "바위", "가위", "보" };

	if (playerHand == compHand)
	{
		printf("비겼습니다");
	}
	else if ((playerHand == 1 && compHand == 2)||
			(playerHand == 2 && compHand == 3) ||
			(playerHand == 3 && compHand == 1))
	{
		printf("승리했습니다.");
	}
	else
	{
		printf("패배했습니다.");
	}

}
