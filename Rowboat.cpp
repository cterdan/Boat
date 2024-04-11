// Daniel Yunker - Week 14 HW EC - Rowboat.cpp
#include <stdexcept>
#include <sstream>
#include <iomanip>
#include "Rowboat.h"
//implementation of accelerate and to string function using oostring class --- redefining from boat for rowboat
string Rowboat::to_string() {
    ostringstream output;
    //output << "Manufacturer: $" << setw(2) << fixed << setprecision(2) << Company::get_price();
    output << fixed << setprecision(2);
    output << "Rowboat" << setw(9) << length << setw(12) << speed << setw(8) << oars;
    return output.str();
}
void Rowboat::accelerate() {
    speed = 1.01 * length;
}