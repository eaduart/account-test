//
//  account.cpp
//  account test
//
//  Created by eaduart on 6/12/14.
//  Copyright (c) 2014 eaduart. All rights reserved.
//

#include "account.h"


#include "Account.h"

double Account::annualInterestRate = 0;

Account::Account(int id0, double balance0, double annualInterestRate0)
{
    set_id(id0);
    set_balance(balance0);
    setannualInterestRate(annualInterestRate0);
}

Account::Account()
{
    set_id(1234);
    set_balance(2000);
    setannualInterestRate(5.0);
}

Account::Account(string the_name, int the_id, double the_balance)
{
    set_id(the_id);
    set_name(the_name);
    set_balance(the_balance);
}

void Account::set_name(string the_name)
{
    name=the_name;
}

void Account::set_balance(double the_balance)
{
    balance=the_balance;
}

void Account::setannualInterestRate(double the_annualInterestRate)
{
    annualInterestRate=the_annualInterestRate;
}

void Account::set_id(int the_id)
{
    id=the_id;
}

string Account::getname()
{
    return name;
}

double Account::getbalance()
{
    return balance;
}

double Account::getMonthlyInterestRate()
{
    return (double) annualInterestRate/12;
}

void Account::withdraw(int amount)
{
    Transactions.push_back(Transaction('W', amount, balance, string("withdrawing some money")));
                           
    balance -= amount;
}
void Account::deposit(int amount)
{
    Transactions.push_back(Transaction('D', amount, balance, string("Depositing some money")));
    balance += amount;
}

double Account::getannualInterestRate()
{
    return annualInterestRate;
}