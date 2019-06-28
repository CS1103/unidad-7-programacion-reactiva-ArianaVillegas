//
// Created by ariana on 28/06/19.
//

#include <SFML/Graphics/CircleShape.hpp>
#include "Component.h"

Circle::Circle(int x, int y, int radius) {
    Circle::x=x;
    Circle::y=y;
    Circle::radius=radius;

}

void Circle::draw() {
    shape.setRadius(radius);
    shape.setPosition(x,y);
}

Rectange::Rectange(int x, int y, int weight, int height) {
    Rectange::x=x;
    Rectange::y=y;
    Rectange::weight=weight;
    Rectange::height=height;
}

void Rectange::draw() {
    shape.setPosition(x,y);
}