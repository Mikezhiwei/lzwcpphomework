#include "Sky.h"
Sky * Sky::instance=nullptr;
string Sky::path;//静态变量要申明使用空间
Sky::Sky(void)
{
	this->window=new RenderWindow(VideoMode(700,500),"airplaneGame");
	this->path="H:";
	Image icon;
	if(icon.loadFromFile(path))
	{
		this->window->setIcon(icon.getSize().x,icon.getSize().y,icon.getPixelsPtr());
	}
	while(this->window->isOpen())
	{
		 Event event;
		 this->window->pollEvent(event);
		 if(event.type==Event::Closed)
		 {
			 this->window->close();
		 }
	}
	
}
Sky::~Sky(void)
{
}
Sky* Sky::getInstance()
{
   if(instance==NULL)
   {
	   instance=new Sky();
   }
   return(instance);
}
RenderWindow * Sky::getWindow()
{
	return(this->window);
}


