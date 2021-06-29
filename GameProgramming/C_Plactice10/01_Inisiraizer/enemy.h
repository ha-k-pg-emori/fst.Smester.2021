#include<stdio.h>
#include<stdlib.h>

#ifndef ENEMY_H
#define HENEMY_H

class ENEMY
{
public:
	ENEMY();
	~ENEMY();
	void InitStatus(const char*);

	void ShowStarsus();

	char Name[32];
	int Hp;
	int Mp = 1;
private:

	int Atk;
	int Def;
};


#endif // !1

