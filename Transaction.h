//
//  Transaction.h
//  account test
//
//  Created by eaduart on 6/12/14.
//  Copyright (c) 2014 eaduart. All rights reserved.
//

#ifndef __account_test__Transaction__
#define __account_test__Transaction__

#include <iostream>
#include <string>
//#include "Date.h"

using namespace std;

class Transaction
{
public:
    Transaction();
    Transaction(char, double, double, string);
    char getType();
    double getBalance();
    double getAmount();
    string getDescription();
    void setType( char );
    void setAmount( double );
    void setBalance( double );
    void setDescription( string );
    
private:
    //Date date;
    char type;
    double amount;
    double balance;
    string description;
};

#endif /* defined(__account_test__Transaction__) */
