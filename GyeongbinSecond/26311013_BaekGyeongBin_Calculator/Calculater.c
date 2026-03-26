#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetRandom(int minVal, int maxVal)
{
	return minVal + rand() % (maxVal - minVal + 1);
}

Add(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	return a / b;
}

int Mod(int a, int b)
{
	return a % b;
}

int main(void)
{
	srand((unsigned int)time(NULL));

	int a = GetRandom(1, 100);
	int b = GetRandom(1, 100);

	printf("************************************\n");
	printf("*  계산기 프로그램\n");
	printf("************************************\n");
	printf("%d + %d = %d\n", a, b, Add(a, b));
	printf("%d - %d = %d\n", a, b, Sub(a, b));
	printf("%d * %d = %d\n", a, b, Mul(a, b));
	printf("%d / %d = %d\n", a, b, Div(a, b));
	printf("%d %% %d = %d\n", a, b, Mod(a, b));

	return 0;
}