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
    double dec();
    void date_setter();
    void print_declination();
    void set_dayNumber();
    
};
