#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PracticeSum(void);
int main(void)
{
	PracticeSum();

	return 0;
}

void PracticeSum(void)
{
	printf("1부터 10000 까지 홀수의 합");
	int sumOddNum = 0;
	for (int i = 0; i <= 10000; i++)
	{
		if (i%2 != 0)
		{
			sumOddNum += i;
		}
	}
	printf(" : %d\n", sumOddNum);

	printf("1부터 10000 까지 짝수의 합");
	int sumVeNum = 0;
	for (int i = 0; i <= 10000; i++)
	{
		if (i % 2 == 0)
		{
			sumVeNum += i;
		}
	}
	printf(" : %d\n", sumVeNum);


	printf("1부터 10000 까지 7의 배수의 합");
	int sumSevNum = 0;
	for (int i = 0; i <= 10000; i++)
	{
		if (i%7 == 0)
		{
			sumSevNum += i;
		}
	}
	printf(" : %d\n", sumSevNum);
}