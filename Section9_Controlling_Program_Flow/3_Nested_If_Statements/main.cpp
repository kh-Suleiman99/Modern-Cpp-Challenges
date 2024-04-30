#include <iostream>

using namespace std;

int main(){
    
    const int min_age {16};
    int age {};
    bool has_car {false};
    
    cout << "age: ";
    cin >> age;
    cout << "are you has a car? ";
    cin >> has_car;
    
    if(age >= min_age)
    {
        if(has_car)
            cout << "Yes - you can drive!\n";
        else
            cout << "Sorry, you need to buy a car before you can drive!" << endl;
    }
    else
        cout << "Sorry, come back in " << min_age - age << " years and be sure you own a car when you come back.";
    
    return 0;
}