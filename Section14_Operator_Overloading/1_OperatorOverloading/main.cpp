#include <iostream>
#include "Money.h"

int main(){
    
    Money m1 {15, 3};
    Money m2 {10, 2};
    Money m3 {155};
    Money sum = m1 + m2;

    std::cout << "m1==m2 ? "<< (m1==m2) << std::endl;

    std::cout << "m3!=m2 ? "<< (m3!=m2) << std::endl << std::endl;

    std::cout << "sum : " << sum<< std::endl << std::endl;

    return 0;
}