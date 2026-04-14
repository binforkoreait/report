#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetRandom(int minVal, int maxVal);
void UpDown(void);

int main(void)
{
    srand((unsigned int)time(NULL));

    UpDown();

    return 0;
}

int GetRandom(int minVal, int maxVal)
{
    return minVal + rand() % (maxVal - minVal + 1);
}

void UpDown(void)
{
    int userScore = 0;
    int comScore = 0;

    int answer;
    int guess;
    int tryCount;

    printf("=== Up-Down 게임 (5전 3승) ===\n");

    while (1)
    {
        answer = GetRandom(10, 90);
        tryCount = 0;

        while (tryCount < 5)
        {
            printf("숫자를 입력하세요 (0: 종료): ");
            scanf("%d", &guess);

            if (guess == 0)
            {
                printf("게임 종료\n");
                return;
            }

            tryCount++;
            
            if (guess == answer)
            {
                printf("정답입니다!\n");
                userScore++;
                printf("현재 스코어 → 사용자: %d, 컴퓨터: %d\n", userScore, comScore);
                break;
            }
            else if (guess < answer)
            {
                printf("UP\n");
            }
            else
            {
                printf("Down\n");
            }

            if (tryCount == 5 && guess != answer)
            {
                printf("5회 실패 → 패배\n");
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
}