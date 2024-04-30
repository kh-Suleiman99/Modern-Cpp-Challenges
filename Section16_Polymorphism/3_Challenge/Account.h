// Simple Account 
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "Printable.h"

class Account : public Printable {
private:

protected:
    std::string name;
    double balance;
public:
    Account(std::string name, double balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual ~Account() = default;
};
#endif