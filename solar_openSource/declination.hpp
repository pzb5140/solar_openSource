//
//  declination.hpp
//  solar_openSource
//
//  Created by PARANGAT on 1/4/19.
//  Copyright © 2019 PARANGAT. All rights reserved.
//

#ifndef declination_hpp
#define declination_hpp

#include <stdio.h>

#endif /* declination_hpp */

class declination{
    int day, month, dayNumber;
    std::string mon;
public:
    declination();
    double dec();   //calculation of declination angle. See https://pvpmc.sandia.gov/modeling-steps/1-weather-design-inputs/sun-position/simple-models/
    void date_setter(); //Asks user to enter month and day.
    void print_declination();
    void set_dayNumber();   //Get day number based on month and day input by user
    ~declination();
};
