//
// Created by ariana on 28/06/19.
//

#ifndef EJ1_WINDOW_H
#define EJ1_WINDOW_H

#include <vector>
#include "Component.h"

class Component;

class WIndow {
    std::vector<Component*> components;
public:
    WIndow(int x, int y);
    void run();
    void addComponent(Component *component){components.push_back(component);};
    void deleteComponent(Component *component);
};


#endif //EJ1_WINDOW_H
