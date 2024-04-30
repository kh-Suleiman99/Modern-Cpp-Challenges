#include <iostream>
using namespace std;


int main(){
    int number {3};
    int original_number {number};
    
    number *= 2;
    cout << "number is " << number << endl;
    
    number += 9;
    cout << "number is " << number << endl;
    
    number -= 3;
    cout << "number is " << number << endl;
    
    number /= 2;
    cout << "number is " << number << endl;
    
    number -= original_number;
    cout << "number is " << number << endl;
    
    number %= 3;
    cout << "number is " << number << endl;
    
    return 0;
}