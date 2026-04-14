#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RockPaperScissors(void);
int GetRandom(int minVal, int maxVal);

int main(void)
{
    srand((unsigned int)time(NULL));

    RockPaperScissors();

    return 0;
}

int GetRandom(int minVal, int maxVal)
{
    return minVal + rand() % (maxVal - minVal + 1);
}

void RockPaperScissors(void)
{
    int userScore = 0;
    int comScore = 0;

    int userInput;
    int comInput;

    printf("=== 가위바위보 (5전 3승) ===\n");

    while (1)
    {
        printf("입력 (1:바위, 2:가위, 3:보): ");
        scanf("%d", &userInput);

        if (userInput < 1 || userInput > 3)
        {
            printf("게임 종료\n");
            break;
        }

        comInput = GetRandom(1, 3);

        printf("컴퓨터 : %d", comInput);
        if (comInput == 1)
        {
            printf("(바위)\n");
        }
        else if (comInput == 2)
        {
            printf("(가위)\n");
        }
        else
        {
            printf("(보)\n");
        }

        if (userInput == comInput)
        {
            printf("결과 : 무승부\n");
        }
        else if (userInput == 1 && comInput == 2 ||
            userInput == 2 && comInput == 3 ||
            userInput == 3 && comInput == 1)
        {
            printf("결과 : 승리\n");
            userScore++;
        }
        else
        {
            printf("결과 : 패배\n");
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