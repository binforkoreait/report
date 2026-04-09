#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Diamond(void);

int main(void)
{
	Diamond();


	return 0;
}


void Diamond(void)
{
	int diaCount = 0;

	while (1)
	{
		printf("입력할 값은 : ");

		if (scanf("%d", &diaCount) != 1)
		{
			printf("입력 오류\n");
			while (getchar() != '\n');
			continue;
		}

		if (diaCount == 99)
		{
			printf("프로그램 종료\n");
			break;
		}

		if (diaCount < 7)
		{
			printf("입력한 값이 너무 작다\n");
			continue;
		}

		if (diaCount % 2 == 0)
		{
			diaCount = diaCount - 1;
		}


		int midLine = (diaCount / 2) + 1;

		int lineCount = 1;

		while (lineCount <= midLine)
		{
			int a = 1;

			while (a <= midLine - lineCount)
			{
				printf(" ");
				a++;
			}

			a = 1;

			while (a <= 2 * lineCount - 1)
			{
				printf("*");
				a++;
			}

			printf("\n");
			lineCount++;
		}

		lineCount = midLine - 1;

		while (lineCount >= 1)
		{
			int a = 1;

			while (a <= midLine - lineCount)
			{
				printf(" ");
				a++;
			}

			a = 1;

			while (a <= 2 * lineCount - 1)
			{
				printf("*");
				a++;
			}

			printf("\n");
			lineCount--;
		}
	}

}


