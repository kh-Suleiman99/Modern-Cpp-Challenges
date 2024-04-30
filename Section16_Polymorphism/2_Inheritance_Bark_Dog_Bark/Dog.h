#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog:public Animal
{
private:
    static const constexpr char* noise = "Woof";
    static constexpr int legs = 4;
public:
    Dog(const std::string& name, int age) : Animal(name, age) {}
    virtual std::string get_noise() override;
    virtual int get_num_legs() override;
};





#endif