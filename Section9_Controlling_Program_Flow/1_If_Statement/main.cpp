#include <iostream>

using namespace std;

int main(){
    
    const int min_age {16};
    int age {};
    
    cout << "age: ";
    cin >> age;
    if(age >= min_age)
        cout << "Yes - you can drive!\n";
        
    return 0;
}