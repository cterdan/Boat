// Daniel Yunker - Week 14 HW EC - Yacht.h
#include "Boat.h"
using namespace std;
#ifndef WK_14_HW_YACHT_H
#define WK_14_HW_YACHT_H
class Yacht : public Boat {
public:
    //  constructor takes a double as an argument. It invokes the constructor of its base class, passing along the argument
    Yacht(int dacabins, float input) : Boat(input) {
        length = input;
        cabin = dacabins;
    }
    //redefinition of to string
    string to_string() override;
    void accelerate() override;
    int cabin;
};
#endif //WK_14_HW_YACHT_H
