#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>

using namespace std;

class gameObject {
public:
    virtual void draw(sf::RenderWindow& window) = 0; //how you declare a virtual function
    virtual void printInfo() = 0;
protected:
    int xpos;
    int ypos;

};

class star : public gameObject {
public:
    star() {
        xpos = rand() % 1000;
        ypos = rand() % 1000;
    }
    void draw(sf::RenderWindow& window);
    void printInfo() { cout << "I am a star and my position is " << xpos << "," << ypos << endl; }

};

class duck : public gameObject {
public:
    duck() {
        xpos = rand() % 1000;
        ypos = rand() % 1000;
    }
    void draw(sf::RenderWindow& window);
    void printInfo() { cout << "I am a duck and my position is " << xpos << "," << ypos << endl; }
};

class shoob : public gameObject {
public:
    shoob() {
        xpos = rand() % 1000;
        ypos = rand() % 1000;
    }
    void draw(sf::RenderWindow& window);
    void printInfo() { cout << "I am a Shoebill and my position is " << xpos << "," << ypos << endl; }
};
