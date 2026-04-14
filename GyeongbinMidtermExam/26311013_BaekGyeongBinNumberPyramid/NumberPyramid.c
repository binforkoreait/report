#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[30];
int resultArr[30];
int originalArr[30];

int GetUserInput();
int GetRandom(int minVal, int maxVal);
void NumberPyramid();

int main(void)
{
    srand(time(NULL));
    NumberPyramid();
    return 0;
}

int GetUserInput()
{
    int arrSize;

    printf("숫자 피라미드, 원소 개수 입력 (10~30, 종료:99): ");

    if (scanf("%d", &arrSize) != 1)
    {
        printf("입력 오류입니다.\n");
        return 99;
    }

    if (arrSize == 99)
        return 99;

    if (arrSize < 10 || arrSize > 30)
    {
        printf("잘못된 입력입니다.\n");
        return -1;
    }

    return arrSize;
}

int GetRandom(int minVal, int maxVal)
{
    return rand() % (maxVal - minVal + 1) + minVal;
}

void NumberPyramid()
{
    int arrSize;
    int i, j, temp;

    while (1)
    {
        arrSize = GetUserInput();

        if (arrSize == 99)
        {
            break;
        }
            
        if (arrSize == -1)
        {
            continue;
        }

        for (i = 0; i < arrSize; i++)
        {
            arr[i] = GetRandom(10, 99);
            originalArr[i] = arr[i];
        }

        for (i = 0; i < arrSize - 1; i++)
        {
            for (j = i + 1; j < arrSize; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        int frontIndex = 0;
        int backIndex = arrSize - 1;

        for (i = 0; i < arrSize; i++)
        {
            if (i % 2 == 0)
                resultArr[i] = arr[frontIndex++];
            else
                resultArr[i] = arr[backIndex--];
        }

        printf("\n정렬 전:\n");
        for (i = 0; i < arrSize; i++)
        {
            printf("%d ", originalArr[i]);
        }

        printf("\n\n오름차순 정렬:\n");
        for (i = 0; i < arrSize; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n\n결과:\n");
        for (i = 0; i < arrSize; i++)
        {
            printf("%d ", resultArr[i]);
        }

        printf("\n\n");
    }
}