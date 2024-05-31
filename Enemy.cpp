#include "Enemy.h"
#include<stdio.h>
void Enemy::Access()
{
	printf("“G‚ªÚ‹ß‚µ‚½\n");
}
void Enemy::Shoot()
{
	printf("“G‚ªËŒ‚‚µ‚½\n");
}
void Enemy::Withdrawal()
{
	printf("“G‚Í—£’E‚µ‚½\n");
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


