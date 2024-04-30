#include <iostream>

#include "Lion.h"
#include "Animal.h"


int main(){
    Lion lion;
    std::cout << lion.get_noise() << std::endl;   // I expect a "Roar"
    std::cout << lion.get_num_legs() <<std::endl; // I expect back 4

    Lion *lion_ptr = new Lion();
    std::cout << lion_ptr->get_noise() << std::endl;   // I expect a "Roar"
    std::cout << lion_ptr->get_num_legs() << std::endl; // I expect back 4

    Animal *animal_ptr = new Lion();
    std::cout << animal_ptr->get_noise() << std::endl;   // I expect a "Roar"
    std::cout << animal_ptr->get_num_legs() << std::endl; // I expect back 4
    return 0;
}