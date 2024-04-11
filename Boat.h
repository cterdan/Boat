// Daniel Yunker - Week 14 HW EC - Boat.h
#include <iostream>
using namespace std;
#ifndef WK_14_HW_BOAT_H
#define WK_14_HW_BOAT_H
class Boat {
public:
    //constructor takes float as an argument
    explicit Boat(float input)
    {
        length = input;
    }
    //getters and setters
    float get_length();
    void set_length(float input);
    float get_speed();
    void set_speed(float input);


    virtual string to_string();
    virtual void accelerate();
    //data members
    float length;
    float speed;
};
#endif //WK_14_HW_BOAT_H
