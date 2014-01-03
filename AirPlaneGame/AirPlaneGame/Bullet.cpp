#include "Bullet.h"
#include"Picture.h"

Bullet::Bullet(void)
{
}
Bullet::Bullet(double x,double y)
{
	this->setTexture(Picture::BULLET);
	this->setPosition(x,y);
}

Bullet::~Bullet(void)
{
}
void Bullet::heartBeat()
{
	this->move(0,-10);
}
