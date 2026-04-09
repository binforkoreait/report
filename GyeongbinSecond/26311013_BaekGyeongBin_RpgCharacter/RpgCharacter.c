#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int GetRandom(int minVal, int maxVal)
{
	return minVal + rand() % (maxVal - minVal + 1);
}

char* GetName(int index)
{
    switch (index)
    {
    case 1: return "Arthur";
    case 2: return "Luna";
    case 3: return "Kai";
    case 4: return "Iris";
    case 5: return "Dante";
    }
    return "Unknown";
}

char* GetJob(int index)
{
    switch (index)
    {
    case 1: return "Àü»ç";
    case 2: return "±Ã¼ö";
    case 3: return "¸¶¹ı»ç";
    case 4: return "µµÀû";
    }
    return "Unknown";
}

char* GetRarity(int value)
{
    if (value <= 4) 
        return "¿µ¿õ";
    else if (value <= 29) 
        return "Èñ±Í";
    else 
        return "ÀÏ¹İ";
}

char* GetWeapon(int value)
{
    if (value == 0) 
        return "Àü¼³ ¹«±â";
    else if (value <= 9) 
        return "¿µ¿õ ¹«±â";
    else if (value <= 29) 
        return "Èñ±Í ¹«±â";
    else 
        return "ÀÏ¹İ ¹«±â";
}

char* GetArmor(int value)
{
    if (value <= 4)
        return "Àü¼³ °©¿Ê";
    else if (value <= 19) 
        return "¿µ¿õ °©¿Ê";
    else 
        return "ÀÏ¹İ °©¿Ê";
}

char* GetMonster(int value)
{
    if (value <= 29) 
        return "½½¶óÀÓ";
    else if (value <= 59) 
        return "°íºí¸°";
    else if (value <= 89) 
        return "¿ÀÅ©";
    else 
        return "µå·¡°ï";
}

int main(void)
{
    srand(time(NULL));

	int indexName = GetRandom(1, 5);	 // 1: Arthur, 2: Luna, 3: Kai, 4: Iris, 5: Dante
	int indexJob = GetRandom(1, 4);     // 1: Àü»ç, 2: ±Ã¼ö, 3: ¸¶¹ı»ç, 4: µµÀû
	int indexRarity = GetRandom(0, 100);    // 0~4: ¿µ¿õ, 5~29: Èñ±Í, 30~100: ÀÏ¹İ
	int indexWeapon = GetRandom(0, 100);    // 0: Àü¼³ ¹«±â, 1~9: ¿µ¿õ ¹«±â, 10~29: Èñ±Í ¹«±â, 30~100: ÀÏ¹İ ¹«±â
	int indexArmor = GetRandom(0, 100);    // 0~4: Àü¼³ °©¿Ê, 5~19: ¿µ¿õ °©¿Ê, 20~100: ÀÏ¹İ °©¿Ê
	int indexMob = GetRandom(0, 100);    // 0~29: ½½¶óÀÓ, 30~59: °íºí¸°, 60~89: ¿ÀÅ©, 90~100: µå·¡°ï

	int atk = GetRandom(10, 25);
	int def = GetRandom(10, 20);
	int hp = GetRandom(80, 100);
    int cp = GetRandom(100, 200);

	printf("===== Ä³¸¯ÅÍ Á¤º¸ =====\n\n");
	printf("ÀÌ¸§ : %s\n",GetName(indexName));
	printf("Á÷¾÷ : %s\n",GetJob(indexJob));
	printf("µî±Ş : %s\n\n",GetRarity(indexRarity));
	printf("´É·ÂÄ¡\n");
	printf("  °ø°İ·Â : %d\n",atk);
	printf("  ¹æ¾î·Â : %d\n",def);
	printf("  Ã¼·Â : %d\n\n",hp);
	printf("Àåºñ\n");
	printf("  ¹«±â : %s\n",GetWeapon(indexWeapon));
	printf("  ¹æ¾î±¸ : %s\n\n", GetArmor(indexArmor));
	printf("ÀüÅõ·Â : %d\n", cp);
	printf("ÄªÈ£ : °­·ÂÇÑ Àü»ç\n\n");
	printf("===== ¸ó½ºÅÍ µîÀå =====\n");
	printf("ÃâÇö ¸ó½ºÅÍ : %s\n", GetMonster(indexMob));


	return 0;
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


