// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

/// @brief 
/// @return 
int main() {
    cout.precision(2);
    cout << fixed;

    Checking_Account c;
    cout << c << endl;
   
    Savings_Account s {"Frank", 5000, 2.6};
    cout << s << endl;
    s.deposit(10000);
    cout << s << endl;
    s.withdraw(10000);
    cout << s << endl;

    Account *ptr = new Trust_Account("Leo", 10000, 2.6);
    cout << *ptr << endl;

    
    Checking_Account frank {"Frank", 5000};
    cout << frank << endl;

    Account *ac1 = new Savings_Account();
    Account *ac2 = new Checking_Account();
    Account *ac3 = new Trust_Account();
    Account *ac4 = new Savings_Account();

    vector<Account *> Accounts {ac1, ac2, ac3, ac4};

    display(Accounts);
    deposit(Accounts, 1000);
    withdraw(Accounts,500);

    delete ac1;
    delete ac2;
    delete ac3;
    delete ac4;
    
    return 0;
}

