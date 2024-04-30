#include "Checking_account.h"

Checking_account::Checking_account(std::string name, double balance)
    :Account{name, balance}
{
}

bool Checking_account::withdraw(double amount){
    bool status = true;
    amount += withdrawal_fee;
    status = Account::withdraw(amount);
    return status;
}

std::ostream &operator<<(std::ostream &os, const Checking_account &account) {
    os << "[Checking_account: " << account.name << ": " << account.balance << "]";
    return os;
}
