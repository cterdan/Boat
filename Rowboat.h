// Daniel Yunker - Week 14 HW EC - Rowboat.h
#include "Boat.h"
#ifndef WK_14_HW_ROWBOAT_H
#define WK_14_HW_ROWBOAT_H
class Rowboat : public Boat {
public:
    //  constructor takes a double as an argument. It invokes the constructor of its base class, passing along the argument
    Rowboat(int daoars, float input) : Boat(input) {
        length = input;
        oars = daoars;
    }
    //redefinition of to string
    string to_string() override;
    void accelerate() override;
    int oars;
};
#endif //WK_14_HW_ROWBOAT_H
