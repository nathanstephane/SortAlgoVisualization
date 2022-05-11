#include "Baton.h"

Baton::Baton(float w, float f, float h) {
	sf::RectangleShape rec;
	rec.setSize(sf::Vector2f(w, f*h));
	rec.setOutlineColor(sf::Color::Red);
	rec.setOutlineThickness(5);

	this->_rec = &rec;

};
