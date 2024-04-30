#include <iostream>

using namespace std;

void print_guest_list(const string&, const string&, const string&);
void clear_guest_list(string&, string&, string&);
void event_guest_list();

int main(){
    
    event_guest_list();
    
    return 0;
}

void print_guest_list(const string &guest_1, const string &guest_2, const string &guest_3){
    cout << guest_1 << endl << guest_2 << endl << guest_3 << endl;
}

void clear_guest_list(string &guest_1, string &guest_2, string &guest_3){
    guest_1 = guest_2 = guest_3 = " ";
}

void event_guest_list(){
    
    string guest_1 {"Larry"};
    string guest_2 {"Moe"};
    string guest_3 {"Curly"};
    
    print_guest_list(guest_1, guest_2, guest_3);
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);
    
}