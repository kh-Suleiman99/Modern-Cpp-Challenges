#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"

class Checking_account:public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking_account &account);
private:
    static constexpr const char *def_name = "Unnamed Checking account";
    static constexpr double def_balance = 0.0;
    static constexpr double withdrawal_fee {1.5};
    
public:
    Checking_account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double amount);
};

#endif