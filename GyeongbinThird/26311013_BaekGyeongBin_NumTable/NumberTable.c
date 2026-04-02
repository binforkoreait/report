#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PracticeNumberTable(void);

int main(void)
{
	PracticeNumberTable();

	return 0;
}


void PracticeNumberTable(void)
{

	int mul = 0;
	for (int i = 2; i <= 9; i++)
	{
		printf("9x9´Ü : %d´Ü\n", i);

		for (int j = 2; j <= 9; j++)
		{
			mul = i * j;
			printf("%d X %d = %d\n",i, j, mul);
		}
		printf("\n");
	}
}