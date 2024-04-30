#include <iostream>

using namespace std;

int main(){
    
    const int min_age {16};
    int age {};
    
    cout << "age: ";
    cin >> age;
    if(age >= min_age)
        cout << "\nYes - you can drive!\n";
    else
        cout << "\nSorry, come back in " << min_age - age << " years";
        
    return 0;
}