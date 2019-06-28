//
// Created by ariana on 28/06/19.
//

#ifndef EJ1_EVENT_H
#define EJ1_EVENT_H


class Event {
    int x;
    int y;
public:
    Event(int x, int y):x(x),y(y){};
    int getX(){ return x;};
    int getY(){ return y;};
};


#endif //EJ1_EVENT_H
