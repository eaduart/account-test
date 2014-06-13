//
//  Date.cpp
//  account test
//
//  Created by eaduart on 6/12/14.
//  Copyright (c) 2014 eaduart. All rights reserved.
//

#include "Date.h"

Date::Date()
{
    Date((int) time(0));
}

Date::Date(int the_elapsedTime)
{
    // current date/time based on current system
    //time_t now = time(0);
    time_t passed = (time_t) the_elapsedTime;
    
    cout << "Number of sec since January 1,1970:" << the_elapsedTime << endl;
    
    //tm *ltm = localtime(&now);
    tm *ltm = localtime(&passed);
    
    // print various components of tm structure.
    cout << "Year: "<< 1900 + ltm->tm_year << endl;
    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    cout << "Day: "<<  ltm->tm_mday << endl;
    cout << "Time: "<< 1 + ltm->tm_hour << ":";
    cout << 1 + ltm->tm_min << ":";
    cout << 1 + ltm->tm_sec << endl;
}

Date::Date(int the_year, int the_month, int the_day)
{
    year=the_year;
    month=the_month;
    day=the_day;
}

int Date::getYear()
{
    return year;
}

int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return day;
}

void Date::setDate(int the_elapsedTime)
{
    Date(the_elapsedtime);
}