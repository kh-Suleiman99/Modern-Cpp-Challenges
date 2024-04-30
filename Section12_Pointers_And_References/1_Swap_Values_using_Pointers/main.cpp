#include <iostream>

using namespace std;

void swap_pointers(int *ptr1, int *ptr2);

int main(){
    int num1 {5};
    int num2 {9};
    
    cout << "Before swaping: num1 = " << num1 << ", num2 = " << num2 << endl;  
    swap_pointers(&num1, &num2);
    cout << "After swaping:  num1 = " << num1 << ", num2 = " << num2 << endl;
    
    return 0;
}

void swap_pointers(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}