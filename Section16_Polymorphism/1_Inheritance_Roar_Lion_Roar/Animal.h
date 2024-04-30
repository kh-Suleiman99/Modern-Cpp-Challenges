#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <string>

class Animal
{
public:
    virtual std::string get_noise() = 0; // Pure virtual function
    virtual int get_num_legs() = 0; // Pure virtual function
};


#endif