#pragma once
#include"SFML\Graphics.hpp"
#include"ResourcePath.hpp"
using namespace sf;
using namespace std;
class Sky
{
public:
	static Sky* getInstance();
	RenderWindow * getWindow();
	Sky(void);
	~Sky(void);
    static string path;
private:
	 static Sky * instance;
	RenderWindow *window;
};

