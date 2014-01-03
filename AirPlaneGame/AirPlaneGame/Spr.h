#pragma once
#include "f:\smfl\sfml-2.1\include\sfml\graphics\sprite.hpp"
using namespace sf;
class Spr :
	public sf:: Sprite
{
public:
	Spr(void);
	~Spr(void);
	bool insert(Spr * other);
	virtual void heartBeat();
};

