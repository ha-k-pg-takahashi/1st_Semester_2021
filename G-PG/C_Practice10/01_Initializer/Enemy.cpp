#include"Enemy.h"

Enemy::Enemy()
{
	Name[0] = '\0';
	Hp = 8;
	Mp = 1;
	Atk = 2;
	Def = 1;
}

Enemy::~Enemy()
{
	printf("デストラクタ\n");
}
void Enemy::InitStatus(const char* enemyName)
{
	sprintf_s(Name, 32, "%s", enemyName);
	Enemy::Hp = 8;
	Enemy::Atk = 2;
	Enemy::Def = 1;
}

void Enemy::ShowStatus()
{
	printf("---Enemy Status---\n");
	printf("%s\nHP=%d\nMP=%d\nATK=%d\nDEF=%d\n", Name, Hp, Mp, Atk, Def);
}