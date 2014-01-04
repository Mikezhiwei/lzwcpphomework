#include "Musican.h"

#include"Sky.h"
sf::Music Musican::BackGround;
void Musican::loadsound()
{
	this->BackGround.openFromFile(Sky::path);
}
