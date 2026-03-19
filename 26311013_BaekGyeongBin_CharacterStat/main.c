#include <stdio.h>

int main(void)
{
	//과제 3 캐릭터 스탯

	float knight_hp = 100.0f;
	float knight_mp = 40.0f;
	float knight_exp = 18.5f;

	float mage_hp = 60.0f;
	float mage_mp = 120.0f;
	float mage_exp = 42.3f;

	float priest_hp = 80.0f;
	float priest_mp = 100.0f;
	float priest_exp = 25.0f;


	printf("=========================\n");
	printf("    CHARACTER STATUS	\n");
	printf("=========================\n");
	printf("Name : %s\n","Knight");
	printf("HP : %.1f/100.0\n", knight_hp);
	printf("MP : %.1f/40.0\n", knight_mp);
	printf("EXP : %.1f%%\n", knight_exp);

	printf("=========================\n");
	printf("    CHARACTER STATUS	\n");
	printf("=========================\n");
	printf("Name : %s\n","Mage");
	printf("HP : %.1f/100.0\n", mage_hp);
	printf("MP : %.1f/40.0\n", mage_mp);
	printf("EXP : %.1f%%\n", mage_exp);

	printf("=========================\n");
	printf("    CHARACTER STATUS	\n");
	printf("=========================\n");
	printf("Name : %s\n","Priest");
	printf("HP : %.1f/100.0\n", priest_hp);
	printf("MP : %.1f/40.0\n", priest_mp);
	printf("EXP : %.1f%%\n", priest_exp);

	return 0;
}