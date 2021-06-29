#ifndef FIGHTER_H
#define FIGHTER_H

#include"common.h"

class Fighter
{
public:
	Fighter();
	~Fighter();

	char name[32];
	Status status;
	void InitRandomStatus();


};
#endif // !FIGHTER_H

