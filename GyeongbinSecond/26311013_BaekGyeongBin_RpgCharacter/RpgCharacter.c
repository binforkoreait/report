#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
	int indexName = GetRandom(1, 4);	 // 1: Arthur, 2: Luna, 3: Kai, 4: Iris, 5: Dante
	int indexJob = GetRandom(1, 3);     // 1: 전사, 2: 궁수, 3: 마법사, 4: 도적
	int indexRarity = GetRandom(0, 100);    // 0~4: 영웅, 5~29: 희귀, 30~100: 일반
	int indexWeapon = GetRandom(0, 100);    // 0: 전설 무기, 1~9: 영웅 무기, 10~29: 희귀 무기, 30~100: 일반 무기
	int indexArmor = GetRandom(0, 100);    // 0~4: 전설 갑옷, 5~19: 영웅 갑옷, 20~100: 일반 갑옷
	int indexMob = GetRandom(0, 100);    // 0~29: 슬라임, 30~59: 고블린, 60~89: 오크, 90~100: 드래곤

	int atk = GetRandom(10, 25);
	int def = GetRandom(10, 20);
	int hp = GetRandom(80, 100);

	printf("===== 캐릭터 정보 =====\n\n");
	printf("이름 : %s\n",indexName);
	printf("직업 : %s\n",indexJob);
	printf("등급 : %s\n\n",indexRarity);
	printf("능력치\n");
	printf("  공격력 : %d\n",atk);
	printf("  방어력 : %d\n",def);
	printf("  체력 : %d\n\n",hp);
	printf("장비\n");
	printf("  무기 : %s\n",indexWeapon);
	printf("  방어구 : %s\n\n", indexArmor);
	printf("전투력 : \n");
	printf("칭호 : 강력한 전사\n\n");
	printf("===== 몬스터 등장 =====\n");
	printf("출현 몬스터 : %s\n", indexMob);


	return 0;
}

int GetRandom(int minVal, int maxVal)
{
	return minVal + rand() % (maxVal - minVal + 1);
}

const char * IndexName()
{

}

const char * IndexJob()
{

}

const char * IndexRarity()
{

}

const char * IndexWeapon()
{

}

const char * IndexArmor()
{

}

const char * IndexMob()
{

}

void Status(int atk, int def, int hp)
{
	atk = GetRandom(10, 25);
	def = GetRandom(10, 20);
	hp = GetRandom(80, 100);

	return Status;
}


