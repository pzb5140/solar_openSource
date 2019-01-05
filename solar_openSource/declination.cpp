//
//  declination.cpp
//  solar_openSource
//
//  Created by PARANGAT on 1/4/19.
//  Copyright © 2019 PARANGAT. All rights reserved.
//  Solar Tracker
//
//  Created by PARANGAT
//  Copyright © 2018 PARANGAT. All rights reserved.
//
//  This code asks the user to enter a date and latitude, and returns the the Earth's declination angle,
//  the time of sunrise and sunset, and the length of day for that particular date.

#include <iostream>
#include <cmath>
#include "declination.hpp"

void declination::date_setter(){
    std::cout << "Enter month (1-12): ";
    std::cin >> month;
    std::cout << "\nEnter day: ";
    std::cin >> day;
    set_dayNumber();
};


void declination::set_dayNumber(){
    //Get exact day number based on date input by user:
    switch (month)
    {
        case 1:
            dayNumber = day * 1.0;
            mon = "January";
            break;
        case 2:
            dayNumber = 31.0 + day;
            mon = "February";
            break;
        case 3:
            dayNumber = 59.0 + day;
            mon = "March";
            break;
        case 4:
            dayNumber = 90.0 + day;
            mon = "April";
            break;
        case 5:
            dayNumber = 120.0 + day;
            mon = "May";
            break;
        case 6:
            dayNumber = 151.0 + day;
            mon = "June";
            break;
        case 7:
            dayNumber = 181.0 + day;
            mon = "July";
            break;
        case 8:
            dayNumber = 212.0 + day;
            mon = "August";
            break;
        case 9:
            dayNumber = 243.0 + day;
            mon = "September";
            break;
        case 10:
            dayNumber = 273.0 + day;
            mon = "October";
            break;
        case 11:
            dayNumber = 304.0 + day;
            mon = "November";
            break;
        case 12:
            dayNumber = 334.0 + day;
            mon = "December";
            break;
    }
}


double declination::dec() {
    //int day;
    double delta;
    delta = 23.45 * sin((M_PI/180)*(360.0/365.0) * (dayNumber + 284.0));
    return delta;
}


void declination::print_declination(){
    std::cout << "\nDeclination angle on " << day << " " << mon << " is: " << dec() << std::endl;
}
