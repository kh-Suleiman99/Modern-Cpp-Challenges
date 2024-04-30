#include "Money.h"

Money::Money(int dollars, int cents) : dollars {dollars}, cents {cents} {}

Money::Money(int total) : dollars {total / 100}, cents {total % 100} {}

bool Money::operator==(const Money &rhs) const{
return((this->dollars == rhs.dollars) &&(this->cents == rhs.cents));
}
bool Money::operator!=(const Money &rhs) const{
return!((this->dollars == rhs.dollars) &&(this->cents == rhs.cents));
}

Money operator+(const Money &lhs, const Money &rhs){
    Money temp{lhs.dollars+rhs.dollars, lhs.cents+rhs.cents};
    return temp;
}

std::ostream &operator<<(std::ostream &os, Money &rhs){
    os << "dollars: " << rhs.dollars << " cents: " << rhs.cents << std::endl;
    return os;
} 