#ifndef _MONEY_H_
#define _MONEY_H_
#include <iostream>

class Money
{
    friend Money operator+(const Money &lhs, const Money &rhs);
    friend std::ostream &operator<<(std::ostream &os, Money &rhs);
public:
    int dollars;
    int cents;

    Money(int dollars, int cents);
    Money(int total);

    bool operator==(const Money &rhs) const;
    bool operator!=(const Money &rhs) const;
};


#endif