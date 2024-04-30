#include <iostream>
using namespace std;

int sum_of_digits(int n);

int main(){
    
    int sum = sum_of_digits(1000);
    cout << sum << endl;
    return 0;
}

int sum_of_digits(int n){
    int digit = n % 10;
    int remainder = n / 10;
    
    if(0 == remainder){
        return digit;
    }
    return (digit + sum_of_digits(remainder));
}