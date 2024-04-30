#include <iostream>

class InsufficentFundsException : public std::exception{
    public:
        InsufficentFundsException() = default;
        ~InsufficentFundsException() = default;
        virtual const char *what() const noexcept{
            return "Error: Insufficent funds exception";
        }
};