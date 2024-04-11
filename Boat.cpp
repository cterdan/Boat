// Daniel Yunker - Week 14 HW EC - Boat.cpp
#include <stdexcept>
#include <sstream>
#include "Boat.h"
//implementation of getters
float Boat::get_length() {
    return length;
}
float Boat::get_speed() {
    return speed;
}
//implementation of setters
void Boat::set_length(float input)
{
    length = input;
}
void Boat::set_speed(float input) {
    speed = input;
}
//implementation of to string function using oostring class
string Boat::to_string() {
    ostringstream output;
    output << Boat::get_length();
    return output.str();
}

void Boat::accelerate() {}