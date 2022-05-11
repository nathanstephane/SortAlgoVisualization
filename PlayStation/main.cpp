#include <SFML/Graphics.hpp>
#include <iostream>
#include "baton.h"

//void render()



int main() {
    sf::RenderWindow window(sf::VideoMode(800, 800), "PlayStation");


   
    const int numOfItems = 100;
    //Baton *batons = (Baton*)malloc(sizeof(Baton)* numOfItems);
    
    Baton* batons[numOfItems];
    
    int x = (window.getSize().x) / numOfItems;
    int y = (window.getSize().y) / numOfItems;

    for (int i = 0; i < numOfItems; i++)
    {
        batons[i] = new Baton(x,i,y);

    }




    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
       // window.draw(shape);
        window.display();
    }
	
	return 0;

}