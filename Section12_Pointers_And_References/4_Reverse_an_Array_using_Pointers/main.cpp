#include <iostream>

using namespace std;

void reverse_array(int *arr, int size);
void display(int arr[], int size);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    cout << "Array Before reversing: \n";
    display(arr, size);
    reverse_array(arr, size);
    cout << "Array After reversing: \n";
    display(arr, size);
    return 0;
}

void reverse_array(int *arr, int size){
    /*first try
    int start {};
    int end {size-1};
    int temp{};
    while(start < end){
        temp = *(arr+start);
        *(arr+start) = *(arr+end);
        *(arr+end) = temp;
        start++;
        end--;
    }
    */
    /*second try*/
    int *start {arr};
    int *end {arr + size - 1};
    int temp{};
    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
}

void display(int arr[], int size){
    int i {};
    for(i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}