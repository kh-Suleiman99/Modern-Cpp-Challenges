#include <iostream>

using namespace std;


class Dog {
public:
    string name;
    int age;
};

Dog test_dog(){
    Dog spot;
    spot.name = "Spot";
    spot.age  = 5;
    return spot;
}  

int main(){
    Dog spot = test_dog();
    cout << spot.name << ", " <<spot.age << endl;
    return 0;
}