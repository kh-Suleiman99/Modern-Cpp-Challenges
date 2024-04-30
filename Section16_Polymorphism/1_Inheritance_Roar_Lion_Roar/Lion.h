#ifndef _LION_H_
#define _LION_H_

#include "Animal.h"

class Lion : public Animal
{
private:
    static const constexpr char* noise = "Roar";
    static constexpr int legs = 4;
public:
    virtual std::string get_noise() override;
    virtual int get_num_legs() override;
};



#endif