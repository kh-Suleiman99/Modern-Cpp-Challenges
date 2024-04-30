#include <iostream>
#include "dog.h"


int main(){
    /*
    Dog dog;
    std::cout << "Before any updating:\n";
    std::cout << "Dog name: " << dog.get_name() << std::endl;
    std::cout << "Dog age: " << dog.get_age() << std::endl;
    dog.set_name("spot");
    dog.set_age(5);
    std::cout << "\nAfter updating:\n";
    std::cout << "Dog name: " << dog.get_name() << std::endl;
    std::cout << "Dog age: " << dog.get_age() << std::endl;
    
    //section_13_3_Add more public methods to an existing class
    std::cout << "Human years: " << dog.get_human_years() << std::endl;
    std::cout << "Dog speaks: " << dog.speak() << std::endl;
    */
    Dog spot {"Spot", 5};
    Dog fido {"Fido", 4};
    std::cout << "Dog name: " << spot.get_name() << std::endl;
    std::cout << "Dog age: " << spot.get_age() << std::endl;
    std::cout << std::endl;
    std::cout << "Dog name: " << fido.get_name() << std::endl;
    std::cout << "Dog age: " << fido.get_age() << std::endl;
    
    
    return 0;
}