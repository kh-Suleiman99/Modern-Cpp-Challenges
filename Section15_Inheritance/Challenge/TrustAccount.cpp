#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double int_rate)
    :Savings_Account(name, balance, int_rate),withdrawals_avaliable {3}{
}

bool TrustAccount::deposit(double amount){
    bool status = true;
    if(amount >= 5000)
        amount += bonus;
    
    status = Account::deposit(amount);

    return status;
}

bool TrustAccount::withdraw(double amount){
    bool status = true;
    if(withdrawals_avaliable > 0){
        if(amount > (.20 * balance)){
            status = false;
            std::cout<<"you can't withdraw more than 20% from your balance " << std::endl;
        }
        else{
            withdrawals_avaliable--;
            status = Savings_Account::withdraw(amount);
        }
        
    }
    else{
        status = false;
        std::cout<<"withdrawals avaliable = " << withdrawals_avaliable << std::endl;
    }
    return status;
}

std::ostream &operator<<(std::ostream &os, const TrustAccount &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}