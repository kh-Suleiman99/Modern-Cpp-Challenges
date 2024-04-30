#include <iostream>

using namespace std;

void print(const int *const arr, int size);
int* apply_all(const int *const arr1, int size1, const int *const arr2, int size2);

int main(){
    
    int arr1[] {1, 2, 3, 4, 5};
    int arr2[] {10, 20, 30};
    int* arr3 {nullptr};
    
    print(arr1, 5);
    print(arr2, 3);
    
    
    arr3 = apply_all(arr1, 5, arr2, 3);
    print(arr3, 15);
    
    delete [] arr3;
    return 0;
}

int* apply_all(const int *const arr1, int size1, const int *const arr2, int size2){
    int *arr = new int[size1 * size2];

    int pos {0};
    
    for( int i {0}; i < size2 ; i++){
        for( int j {0}; j <size1; j++){
            arr[pos++] = arr1[j] * arr2[i];
        }
    }
    return arr;
}

void print(const int *const arr, int size){
    if(nullptr == arr || 0 == size ){
        cout << "There are not elements";
    }
    else{
        int i {};
        for(i = 0; i < size ; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
}
