//
//  main.cpp
//  solar_openSource
//
//  Created by PARANGAT on 1/4/19.
//  Copyright © 2019 PARANGAT. All rights reserved.
//

#include <iostream>
#include "declination.hpp"
using namespace std;

int main() {
    declination declin; //Creat object for declination angle calculations.
    
    //Set day for which declination angle is to be calculated, and print angle:
    declin.date_setter();
    declin.print_declination();
    return 0;
}
