#include<stdio.h>
#include<stdlib.h>

#ifndef FIGHTER_H
#define FIGHTER_H

class Fighter
{
public:
	Fighter();
	~Fighter();

	char name[32];

	int hp;
	int str;
	int mag;
	int tec;
	int spd;
	int def;
	int iuc;
	int mde;
};

#endif 