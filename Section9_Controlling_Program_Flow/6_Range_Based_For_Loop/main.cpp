/*
 * Use a range-based for loop to loop through a given vector
 * of integers and determine how many elements in the vector
 * are evenly divisible by either 3 or by  5.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    unsigned int count {};
    
    for(auto v: vec)
    {
        if((v % 3 == 0) || (v % 5 == 0))
            count++;
    }
    
    cout << count << endl;
    return 0;
}