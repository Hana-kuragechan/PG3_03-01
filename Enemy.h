#pragma once
class Enemy
{
public:
	void Access();
	void Shoot();
	void Withdrawal();
	void Update();
private:
	static void (Enemy::* spFuncTable[])();
	int phase_ = 0;
};

