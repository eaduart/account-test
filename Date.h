//
//  Date.h
//  account test
//
//  Created by eaduart on 6/12/14.
//  Copyright (c) 2014 eaduart. All rights reserved.
//

#ifndef __account_test__Date__
#define __account_test__Date__

#include <iostream>
#include <ctime>

using namespace std;

class Date
{
public:
    int year;
    int month;
    int day;
    
    Date();
    Date(int);
    Date(int, int, int );
    
    int getYear();
    int getMonth();
    int getDay();
    
    void setDate(int);
};


#endif /* defined(__account_test__Date__) */
