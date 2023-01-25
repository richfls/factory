#include"GameObject.h"
#include<SFML/Graphics.hpp>

void star::draw(sf::RenderWindow& window) { //passes a POINTER to the gamescreen
    sf::CircleShape triangle1(30, 3);
    triangle1.setFillColor(sf::Color(0, 200, 255));
    triangle1.setPosition(xpos, ypos);
    window.draw(triangle1);//draw to gamescreen

    sf::CircleShape triangle2(30, 3);
    triangle2.setFillColor(sf::Color(200, 200, 255));
    triangle2.setPosition(xpos + 40, ypos - 15);
    triangle2.rotate(60); //twist to make star shape
    window.draw(triangle2);
}

void duck::draw(sf::RenderWindow& window) {
    sf::CircleShape triangle3(30, 3);
    triangle3.setFillColor(sf::Color(255, 255, 0));
    triangle3.setPosition(xpos, ypos);
    window.draw(triangle3);
    //cout << "drawing ducks!" << endl;
}

void shoob::draw(sf::RenderWindow& window) {
    sf::RectangleShape rectangle(sf::Vector2f(30, 20));
    rectangle.setFillColor(sf::Color(25, 255, 0));
    rectangle.setPosition(xpos, ypos);
    window.draw(rectangle);
    //cout << "drawing ducks!" << endl;
}
