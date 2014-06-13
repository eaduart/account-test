//
//  Account.h
//  Chapter9_Practice
//
//  Created by Kaitlyn Duarte on 5/31/14.
//  Copyright (c) 2014 Kaitlyn Duarte. All rights reserved.
//

#ifndef __Chapter9_Practice__Account__
#define __Chapter9_Practice__Account__

#include <iostream>
#include <vector>
#include <string>
#include "Transaction.h"

using namespace std;

class Account
{
public:
    int id;
    double balance;
    string name;
    vector<Transaction> Transactions;
    
    Account(int, double, double);
    Account();
    Account(string, int, double);
    
    string getname();
    double getbalance();
    double getannualInterestRate();
    int getid();
    
    void set_name(string);
    void set_balance(double);
    void set_id(int);
    void setannualInterestRate(double);
    
    double getMonthlyInterestRate();
    void withdraw(int);
    void deposit(int);
    
private:
    static double annualInterestRate;
};

#endif /* defined(__Chapter9_Practice__Account__) */

