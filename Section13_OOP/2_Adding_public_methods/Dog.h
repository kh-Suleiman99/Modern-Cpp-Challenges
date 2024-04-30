#ifndef _DOG_H_
#define _DOG_H_

#include <string>


class Dog {
private:
    std::string name;
    int age;
    
public:
    //section_13_4_Add more public methods to an existing class
    Dog(){
        name = "None";
        age = 0;
    }
    //section_13_5_Add an Overloaded Constructor to an Existing Class
    Dog(std::string name_val, int age_val){
        name = name_val;
        age = age_val;
    }
    //section_13_2
    std::string get_name(){return name;}
    void set_name(std::string dog_name) {name = dog_name;}
    int get_age() {return age;}
    void set_age(int dog_age) {age = dog_age;}
    
    //section_13_3_Add more public methods to an existing class
    int get_human_years() {return age * 7;}
    std::string speak(){return std::string("Woof");}
};

#endif // _DOG_H_
