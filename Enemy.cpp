#include "Enemy.h"
#include<stdio.h>
void Enemy::Access()
{
	printf("�G���ڋ߂���\n");
}
void Enemy::Shoot()
{
	printf("�G���ˌ�����\n");
}
void Enemy::Withdrawal()
{
	printf("�G�͗��E����\n");
}
void (Enemy::* Enemy::spFuncTable[])()={
	&Enemy::Access,
	& Enemy::Shoot,
	& Enemy::Withdrawal
};

void Enemy::Update() {
	for (int i = 0; i < 3; i++) {
		(this->*spFuncTable[static_cast<size_t>(phase_)])();
		phase_ += 1;
	}
	
	
}


