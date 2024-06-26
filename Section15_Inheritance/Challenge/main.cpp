// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Checking_account.h"
#include "TrustAccount.h"
#include "Account_Util.h"

using namespace std;

int main() {

    cout.precision(2);
    cout << fixed;
/*   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);



*/
    Checking_account ch_account{"khaled", 2000};
    cout << ch_account << endl;
    ch_account.deposit(1000);
    cout << ch_account << endl;
    ch_account.withdraw(1000);
    cout << ch_account << endl << endl;



    TrustAccount tr_account{"khaled", 2000, 5};
    cout << tr_account << endl;
    tr_account.deposit(5000);
    cout << tr_account << endl;
    tr_account.withdraw(20);
    cout << tr_account << endl;
    tr_account.withdraw(500);
    cout << tr_account << endl;
    tr_account.withdraw(1500);
    cout << tr_account << endl;
    tr_account.withdraw(500);
    cout << tr_account << endl;
    tr_account.withdraw(500);
    cout << tr_account << endl;
    
    return 0;
}

