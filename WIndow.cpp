//
// Created by ariana on 28/06/19.
//

#include <algorithm>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "WIndow.h"

WIndow::WIndow(int x, int y) {
    sf::RenderWindow _window(sf::VideoMode(x,y),"Window");
    while(_window.isOpen()){
        sf::Event _event;
        while(_window.pollEvent(_event)){
            if(_event.type==sf::Event::Closed){
                _window.close();
            }
        }
        _window.clear(sf::Color::Black);
        for(auto comp:components){
            comp->draw();
        }
        _window.display();
    }
}

void WIndow::deleteComponent(Component *component) {
    auto item = std::find(std::begin(components),std::end(components),component);
    if(item!=std::end(components)){
        components.erase(item);
    }
}

void WIndow::run() {
    for(auto component:components){
        int x,y;
    }
}