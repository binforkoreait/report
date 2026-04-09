#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	
void Calculate(void);
void Add(int a, int b);
void Sub(int a, int b);
void Mul(int a, int b);
void Div(int a, int b);

int main(void)
{
	Calculate();

	return 0;
}

void Calculate(void)
{
	char chval;
	int a, b;

	while (1)
	{
		printf("=== 계산기 메뉴 ===\n");
		printf("[+] 덧셈\n");
		printf("[-] 뺄셈\n");
		printf("[*] 곱셈\n");
		printf("[/] 나눗셈\n");
		printf("[Q] 종료\n");

		printf("메뉴를 선택하세요: ");
		scanf(" %c", &chval);

		if (chval == 'Q' || chval == 'q')
		{
			printf("프로그램을 종료합니다.");
			break;
		}

		if (chval != '+' && chval != '-' && chval != '*' && chval != '/')
		{
			printf("잘못된 메뉴 입력입니다.\n\n");
			continue;
		}

		if (chval == '+')
		{
			printf("덧셈을 선택했습니다.");
			printf("두 수를 입력하세요: ");
			scanf("%d %d", &a, &b);
			Add(a, b);
		}
		else if (chval == '-')
		{
			printf("뺄셈을 선택했습니다.");
			printf("두 수를 입력하세요: ");
			scanf("%d %d", &a, &b);
			Sub(a, b);
		}
		else if (chval == '*')
		{
			printf("곱셈을 선택했습니다.");
			printf("두 수를 입력하세요: ");
			scanf("%d %d", &a, &b);
			Mul(a, b);
		}
		else
		{
			printf("나눗셈을 선택했습니다.");
			printf("두 수를 입력하세요: ");
			scanf("%d %d", &a, &b);
			Div(a, b);
		}
	}
}

void Add(int a, int b)
{
	printf("덧셈의 결과: %d + %d  =  %d 입니다.\n",a , b, a+b);
}

void Sub(int a, int b)
{
	printf("뺄셈의 결과: %d - %d  =  %d 입니다.\n", a, b, a - b);
}

void Mul(int a, int b)
{
	printf("곱셈의 결과: %d X %d  =  %d 입니다.\n", a, b, a * b);
}

void Div(int a, int b)
{
	if (b == 0)
	{
		printf("0으로 나눌 수 없습니다.\n");
		return;
	}
	printf("나눗셈의 결과: %d / %d  = 몫: %d, 나머지: %d 입니다.\n", a, b, a / b, a % b);
}
