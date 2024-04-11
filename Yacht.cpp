// Daniel Yunker - Week 14 HW EC - Yacht.cpp
#include "Yacht.h"
#include <string>
#include <sstream>
#include <iomanip>
//implementation of to string function using oostring class and redefinitions of override classes
string Yacht::to_string() {
    ostringstream output;
    //output << "Manufacturer: $" << setw(2) << fixed << setprecision(2) << Company::get_price();
    output << fixed << setprecision(2);
    output << "Yacht" << setw(11) << length << setw(12)  << speed << setw(8) << cabin;
    return output.str();
}
void Yacht::accelerate() {
    speed = 5.8 * length;
}
