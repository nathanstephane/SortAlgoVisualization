#pragma once
#include "SFML/Graphics.hpp"

class Baton
{
	int _w, _h;
	int _factor;
	sf::RectangleShape *_rec;

	Baton(float w,float f, float h);

	sf::RectangleShape* getRect() {
		return this->_rec;
	}
	

};

