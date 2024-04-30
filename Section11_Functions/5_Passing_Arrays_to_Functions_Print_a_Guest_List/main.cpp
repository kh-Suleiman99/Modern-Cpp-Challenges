#include <iostream>
#include <string>

using namespace std;

void print_guest_list(const string guest_list[], size_t guest_list_size);
void clear_guest_list(string guest_list[], size_t guest_list_size);
void event_guest_list();

int main(){
    
    event_guest_list();
    return 0;
}


void print_guest_list(const string guest_list[], size_t guest_list_size){
    for(size_t i = 0; i < guest_list_size;i++){
        cout << guest_list[i] << endl;
    }
}

void clear_guest_list(string guest_list[], size_t guest_list_size){
    for(size_t i = 0; i < guest_list_size;i++){
        guest_list[i] = " ";
    }
}

void event_guest_list() {

    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};
    
    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);
}