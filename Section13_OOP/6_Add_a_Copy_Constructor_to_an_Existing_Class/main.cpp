#include <iostream>
#include <string>
using namespace std;


class Dog{
    private:
        string name;
        int age;
    public:
        Dog(string n = "none", int a = 0) : name{n}, age{a}{ }
        Dog(const Dog &source):Dog(source.name, source.age){
            cout << "Copy Constructor" <<endl;
        }
};
int main(){
    Dog spot {"spot", 5};
    Dog temp {spot};
    return 0;
}