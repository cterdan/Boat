// Daniel Yunker - Week 14 HW EC - Harbor.cpp
#include <iostream>
#include <array>
#include "Boat.h"
#include "Rowboat.h"
#include "Yacht.h"
int main() {
    //lcv
    int i = 0;
    array<Boat*, 20> boats;
    //top of formatted list
    cout << "Original list:" << endl;
    printf("Boat      Length       Speed Oars/Cabins\n");
    printf("====      ======       ===== ===========\n");
    do {
        //instantiating rowboat and yacht objects
        //Rowboat cool_rowboat(rand() % 100, 0);
        //Yacht cool_yacht(rand() % 100, 0);
        //creating an integer to simulate a coin flip
        int heads_or_tails;
        heads_or_tails = rand() % 100;
        // creating a length based on given equation
        double length = i * 1.23 + 500;
        //if "coin flip" greater than or equal to 50 then it's a rowboat, if not it's a yacht
        if (heads_or_tails >= 50)
        {
            boats[i] = new Rowboat(rand() % 100, 0);
            //set length
            boats[i]->set_length(length);
            //display results
            cout << boats[i]->to_string() << endl;
        }
        else
        {
            boats[i] = new Yacht(rand() % 100, 0);
            //set length
            boats[i]->set_length(length);
            //display results
            cout << boats[i]->to_string() << endl;
        }
        i++; //increment 20 times
    } while (i != 20);
    //top of formatted list
    cout << "Updated list:" << endl;
    printf("Boat      Length       Speed Oars/Cabins\n");
    printf("====      ======       ===== ===========\n");
    for(int x = 0; x != 20; x++)
    {
        //Access each element of the array or vector and update the speed by calling its accelerate() function.
        boats[x]->accelerate();
        //Print each boat's updated information
        cout << boats[x]->to_string() << endl;
    }
    return 0;
}
