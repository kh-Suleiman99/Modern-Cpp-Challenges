#include <iostream>

using namespace std;

int find_max_element(int *arr, int size);

int main(){
    int arr[] = {12, 45, 67, 23, 9};
    
    int max = find_max_element(arr, 5);
    
    cout << "max = " << max << endl ;
    
    return 0;
}

int find_max_element(int *arr, int size){
    int max = *arr;
    for(int i = 1 ; i<size ; i++){
        if(*(arr+i) > max) max = *(arr+i);
    }
    return max;
}