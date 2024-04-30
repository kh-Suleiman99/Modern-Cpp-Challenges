#include <iostream>

using namespace std;

void multiply_with_pointer(int* ptr, int multiplier);

int main(){
    
    int num {};
    int multiplier {};
    
    cout << "Enter the number: " ;
    cin >> num;
    cout << "Enter the multiplier: " ;
    cin >> multiplier;
    
    cout << "\nthe number before multiplying: "<< num << endl;
    
    multiply_with_pointer(&num, multiplier);
    
    cout << "the number after multiplying: "<< num << endl;
    
    return 0;
}

void multiply_with_pointer(int* ptr, int multiplier){
    *ptr *= multiplier;
}