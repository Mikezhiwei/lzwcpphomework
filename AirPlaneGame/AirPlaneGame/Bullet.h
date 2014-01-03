#pragma once
#include "spr.h"
class Bullet :
	public Spr
{
public:
	Bullet(void);
	Bullet(double x,double y);
	~Bullet(void);
	void heartBeat();
};

