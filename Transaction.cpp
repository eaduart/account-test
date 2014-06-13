//
//  Transaction.cpp
//  account test
//
//  Created by eaduart on 6/12/14.
//  Copyright (c) 2014 eaduart. All rights reserved.
//

#include <string>
#include "Transaction.h"

using namespace std;

Transaction::Transaction()
{
    
}

Transaction::Transaction(char the_type, double the_amount, double the_balance, string the_description )
{
    setType(the_type);
    setAmount(the_amount);
    if ( the_type == 'W' )
        setBalance(the_balance-the_amount);
    else if ( the_type == 'D' )
        setBalance(the_balance+the_amount);
    
    setDescription(the_description);
}

char Transaction::getType()
{
    return type;
}

double Transaction::getBalance()
{
    return balance;
}

double Transaction::getAmount()
{
    return amount;
}

string Transaction::getDescription()
{
    return description;
}

void Transaction::setType(char the_type)
{
    type=the_type;
}

void Transaction::setAmount(double the_amount)
{
    amount=the_amount;
}

void Transaction::setBalance(double the_balance)
{
    balance=the_balance;
}

void Transaction::setDescription(string the_description )
{
    description = the_description;
}
