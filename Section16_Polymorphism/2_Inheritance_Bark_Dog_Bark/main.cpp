#include <iostream>

#include "Animal.h"
#include "Dog.h"

int main(){

    Dog dog{"Spot", 5};
    std::string noise = dog.get_noise(); // Woof
    std::cout << noise << std::endl;
    int legs = dog.get_num_legs();       // 4
    std::cout << legs << std::endl;
    int age = dog.get_age();             // 5
    std::cout << age << std::endl;
    std::string name = dog.get_name();
    std::cout << name << std::endl;

    Dog *dog_ptr = new Dog{"Spot", 5};         
    noise = dog_ptr->get_noise();  // Woof
    std::cout << noise << std::endl;
    legs = dog_ptr->get_num_legs();        // 4
    std::cout << legs << std::endl;
    age = dog_ptr->get_age();              // 5
    std::cout << age << std::endl;
    name = dog_ptr->get_name();    // Spot
    std::cout << name << std::endl;


   

    Animal *animal_ptr = new Dog{"Spot", 5};
    noise = animal_ptr->get_noise();    // Woof
    std::cout << noise << std::endl;
    legs = animal_ptr->get_num_legs();        // 4
    std::cout << legs << std::endl;
    age = animal_ptr->get_age();              // 5
    std::cout << age << std::endl;
    name = animal_ptr->get_name();    // Spot
    std::cout << name << std::endl;
    return 0;
}