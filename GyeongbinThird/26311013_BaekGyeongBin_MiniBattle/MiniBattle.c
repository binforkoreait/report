#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static const int GAME_EXIT = 0;
static const int GAME_CONTINUE = 1;
static const int PLAYER_HP_MAX = 100;
static const int PLAYER_ATTACK = 1;
static const int PLAYER_DEFENCE = 2;

char playerName[32] = { 0 };
int playerHP = 100;
int mobHP = 100;

int GetRandom(int minVal, int maxVal);
int PlayMiniBattle(int playCount);

int main(void)
{
    srand((unsigned int)time(NULL));

    playerHP = 100;
    mobHP = 100;

    printf("플레이어 이름 입력: ");
    scanf("%31s", playerName);

    printf("\n--- 게임 시작 ---\n\n");

    int playCount = 1;

    if (GAME_EXIT == PlayMiniBattle(playCount))
    {
        printf("%d 회차에서 전투 종료\n", playCount);
        return 0;
    }

    playCount = 2;
    if (GAME_EXIT == PlayMiniBattle(playCount))
    {
        printf("%d 회차에서 전투 종료\n", playCount);
        return 0;
    }

    playCount = 3;
    if (GAME_EXIT == PlayMiniBattle(playCount))
    {
        printf("%d 회차에서 전투 종료\n", playCount);
        return 0;
    }

    printf("--- 전투 종료 ---\n");

    return 0;
}

int GetRandom(int minVal, int maxVal)
{
    return rand() % (maxVal - minVal + 1) + minVal;
}

int PlayMiniBattle(int playCount)
{
    int playerAction = 0;

    printf("%s [%d회차] 행동 선택 (1: 공격, 2: 방어): ", playerName, playCount);
    scanf("%d", &playerAction);

    if (playerAction == PLAYER_ATTACK)
    {
        int playerDamage = GetRandom(10, 20);
        int mobDamage = GetRandom(40, 50);

        mobHP -= playerDamage;
        playerHP -= mobDamage;

        printf("\n[%d회차 결과]\n", playCount);
        printf("%s가 몬스터를 공격했다! 몬스터에게 %d 데미지\n", playerName, playerDamage);
        printf("몬스터가 반격했다! %s가 %d 데미지를 받음\n", playerName, mobDamage);
    }
    else if (playerAction == PLAYER_DEFENCE)
    {
        int heal = GetRandom(20, 50);

        playerHP += heal;

        printf("\n[%d회차 결과]\n", playCount);
        printf("%s가 방어를 선택했다!\n", playerName);
        printf("%s의 HP가 %d 회복되었다.\n", playerName, heal);
    }
    else
    {
        printf("잘못된 입력입니다.\n");
    }

    if (playerHP < 0)
    {
        playerHP = 0;
    }

    if (mobHP < 0)
    {
        mobHP = 0;
    }

    if (playerHP > PLAYER_HP_MAX)
    {
        playerHP = PLAYER_HP_MAX;
    }

    printf("%s HP : %d\n", playerName, playerHP);
    printf("몬스터 HP : %d\n\n", mobHP);

    if (playerHP == 0 || mobHP == 0)
    {
        if (playerHP == 0 && mobHP == 0)
        {
            printf("플레이어와 몬스터가 동시에 쓰러졌습니다.\n");
        }
        else if (playerHP == 0)
        {
            printf("%s가 패배했습니다.\n", playerName);
        }
        else if (mobHP == 0)
        {
            printf("몬스터를 처치했습니다.\n");
        }

        return GAME_EXIT;
    }

    return GAME_CONTINUE;
}