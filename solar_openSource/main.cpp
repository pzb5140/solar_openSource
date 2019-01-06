//
//  main.cpp
//  solar_openSource
//
//  Created by PARANGAT on 1/4/19.
//  Copyright © 2019 PARANGAT. All rights reserved.
//

#include <iostream>
#include "declination.hpp"
#include <cmath>
//using namespace std;

int main() {
    declination *declin = new declination(); //Create object for declination angle calculations.
    
    //Set day for which declination angle is to be calculated, and print angle:
    declin->date_setter();
    declin->print_declination();
    
    delete declin; //delete object and free up memory
    return 0;
    
}
