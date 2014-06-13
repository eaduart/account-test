//
//  main.cpp
//  account test
//
//  Created by eaduart on 6/12/14.
//  Copyright (c) 2014 eaduart. All rights reserved.
//

#include <iostream>
#include "account.h"

using namespace std;

void Account_Test()
{
    Account Account1;
    Account1.set_name("George");
    Account1.set_id(1122);
    Account1.set_balance(1000);
    Account1.deposit(30);
    Account1.deposit(40);
    Account1.deposit(50);
    Account1.withdraw(5);
    Account1.withdraw(4);
    Account1.withdraw(2);
    
    //ADD TRANSACTIONS
    cout<<"Name:" << Account1.getname()<<", Balance $"<<Account1.getbalance()<< " Monthly Interest "<< Account1.getMonthlyInterestRate()<<endl;
    for ( int i=0; i< Account1.Transactions.size(); i++ )
    {
        cout <<" Type: "<< Account1.Transactions[i].getType() << " amount: " << Account1.Transactions[i].getAmount() << " balance: " << Account1.Transactions[i].getBalance() << " description: " << Account1.Transactions[i].getDescription() << endl;
    }
    
}


int main(int argc, const char * argv[])
{
    Account_Test();
}

