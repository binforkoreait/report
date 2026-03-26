#include <stdio.h>

int main(void)
{
	//----------------------------------------------------------------------------
	// 산술 연산자 실습

	int a = 10;
	int b = 3;
	printf("산술 연산자 : %d\n", a + b);
	printf("산술 연산자 : %d\n", a - b);
	printf("산술 연산자 : %d\n", a * b);
	printf("산술 연산자 : %d\n", a / b);
	printf("산술 연산자 : %d\n", a % b);

	//----------------------------------------------------------------------------
	// 증감 연산자 실습

	int r1 = 5; 
	int r2 = r1++;
	printf("증감 연산자 : %d    %d\n", r2++, ++r2);
	
	//----------------------------------------------------------------------------
	// 복합 대입 연산자 실습

	a += 5;
	a -= 3;
	a *= 2;
	a /= 4;
	a %= 3;
	printf("복합 대입 연산자 : %d\n", a);

	//----------------------------------------------------------------------------
	// 단항 연산자 실습

	int x = 10;
	x = ~x;
	printf("단항 연산자 : %d\n", x);

	//----------------------------------------------------------------------------
	// 형 변환 연산자 실습

	double a1 = 5 / 2;
	double a2 = (double)5 / 2;
	printf("형 변환 연산자 : %f\n", a1);
	printf("형 변환 연산자 : %f\n", a2);
	

	//----------------------------------------------------------------------------
	// sizeof 실습

	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(long long));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
	printf("%zu\n", sizeof('A'));
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(long long*));
	printf("%zu\n", sizeof(0x34 + 128));
	printf("%zu\n", sizeof(3 + 2.5));

	//----------------------------------------------------------------------------
	// 삼항 조건 연산자 실습

	int b1 = 10;
	int b2 = 30;
	float b3 = 20;

	int y = (b1 % 2 == 0) ? 1 : 0;
	int maxVal = (b1 > b2) ? b1 : b2;
	float result = (b3 > 0) ? 100.0 : -100.0;


	printf("%d\n", y);
	printf("%d\n", maxVal);
	printf("%f\n", result);

	return 0;
}