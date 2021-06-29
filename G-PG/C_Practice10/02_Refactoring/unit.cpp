#include"unit.h"


Fighter::Fighter()
	:status()
{
	name[0] = '\0';

}
Fighter::~Fighter()
{

}
void Fighter::InitRandomStatus()
{
	
	status.hp = rand() % 20 + 1;
	status.str = rand() % 20 + 1;
	status.mag = rand() % 20 + 1;
	status.tec = rand() % 20 + 1;
	status.spd = rand() % 20 + 1;
	status.def = rand() % 20 + 1;
	status.luc = rand() % 20 + 1;
	status.mde = rand() % 20 + 1;
}
