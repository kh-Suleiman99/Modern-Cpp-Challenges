#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> vec {2, 4, 6, 8};
    int result {};
    
    for(unsigned i {0}; i < (vec.size()-1); i++){
        for(unsigned j {i+1}; j < vec.size(); j++){
            result += (vec.at(i) * vec.at(j));
        }
    }
    
    cout << "Result: " << result;
    return 0;
}