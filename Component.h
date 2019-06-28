//
// Created by ariana on 28/06/19.
//

#ifndef EJ1_COMPONENT_H
#define EJ1_COMPONENT_H

#include <functional>
#include <SFML/Graphics/RenderWindow.hpp>
#include "Event.h"
#include "WIndow.h"


class Component {
    std::function<void(Event)> clickEvent;
    std::function<void(Event)> mouseMoveEvent;
public:
    virtual void onClick(std::function<void(Event)> event)=0;
    virtual void onMouseMove(std::function<void(Event)> event)=0;
    virtual void draw()=0;
    virtual void getShape()=0;
};

class Circle:public Component {
    int x;
    int y;
    int radius;
    sf::CircleShape shape;
public:
    Circle(int x, int y, int radius);
    void draw() override;
    void getShape() override;
};

class Rectange:public Component{
    int x;
    int y;
    int weight;
    int height;
    sf::Rect shape(weight,height);
public:
    Rectange(int x, int y, int weight, int height);
    void draw() override;
    void getShape() override;
};

#endif //EJ1_COMPONENT_H
