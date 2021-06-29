#include"enemy.h"

ENEMY::ENEMY()
{
	printf("コンストラクタ");

	Name[0] = { '\0' };
	Hp = 8;
	Mp = 1;
	Atk = 2;
	Def = 1;
}
ENEMY::~ENEMY()
{
	printf("デストラクタ");
}
void ENEMY::InitStatus(const char* enemyName)
{
	sprintf_s(Name, 32, "%s", enemyName);
	Hp = 8;
	Mp = 0;
	Atk = 2;
	Def = 1;
}
void ENEMY::ShowStarsus()
{
	printf("---Enemy Status---");
	printf("enemyName>%s,Hp%d,Mp%d,Atk%d,Def%d\n", Name, Hp, Mp, Atk, Def);
}
