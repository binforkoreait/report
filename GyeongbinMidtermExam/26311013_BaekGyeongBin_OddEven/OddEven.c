#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void OddEven(void);
int GetRandom(int minVal, int maxVal);


int main(void)
{
	srand((unsigned int)time(NULL));

	OddEven();

	return 0;
}

int GetRandom(int minVal, int maxVal)
{
	return minVal + rand() % (maxVal - minVal + 1);
}

void OddEven(void)
{
	char userInput;
	int userScore = 0;
	int comScore = 0;
	int comValue;

	int userResult;
	int comResult;

	printf("=== 홀짝 게임 (5전 3승) ===\n");
	while (1)
	{
		printf("입력하세요 (E:짝, O:홀, Q:종료): ");
		scanf(" %c", &userInput);

		if (userInput == 'Q' || userInput == 'q')
		{
			printf("게임 종료\n");
			break;
		}

		if (!(userInput == 'E' || userInput == 'e' || userInput == 'O' || userInput == 'o'))
		{
			printf("잘못된 입력입니다.\n");
			continue;
		}

		comValue = GetRandom(10, 90);

		printf("컴퓨터 값: %d → ",comValue);

		if (comValue % 2 == 0)
		{
			printf("짝\n");
			comResult = 0;

		}
		else
		{
			printf("홀\n");
			comResult = 1;
		}

		if (userInput == 'O' || userInput == 'o')
		{
			userResult = 1;
		}
		else 
		{
			userResult = 0;
		}

		if (userResult == comResult) 
		{
			printf("결과: 승리\n");
			userScore++;
		}
		else
		{
			printf("결과: 패배\n");
			comScore++;
		}

		printf("현재 스코어 → 사용자: %d, 컴퓨터: %d\n", userScore, comScore);

		if (userScore == 3)
		{
			printf("사용자가 3승을 달성했습니다.\n");
			printf("게임 종료\n");
			break;
		}

		if (comScore == 3)
		{
			printf("컴퓨터가 3승을 달성했습니다.\n");
			printf("게임 종료\n");
			break;
		}		
	}
}