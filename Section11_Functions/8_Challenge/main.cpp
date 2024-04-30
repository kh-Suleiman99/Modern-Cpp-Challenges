#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void Print_Menu();
char Read_Selection();
void Print_numbers(const vector<int> &list);
void Add_number(vector<int> &list, int &total, int &smallest, int &largest);
void Display_mean_of_umbers(vector<int> &list, int total);

int main(){
    
    vector<int> list {};
    char selection {};
    int smallest {};
    int largest {};
    int total {};
    
    
    do{
        Print_Menu();
        selection = Read_Selection();
        
        switch(selection){
            case 'P':
                Print_numbers(list);
                break;
            case 'A':
                Add_number(list, total, smallest, largest);
                break;
            case 'M':
                Display_mean_of_umbers(list, total);
                break;
            case 'S':
                cout << "The smallest = " << smallest << endl;
                break;
            case 'L':
                cout << "The largest = " << largest << endl;
                break;
            case 'Q':
                cout << "Goodbye\n";
                break;
            default :
                cout << "Unknown selection, please try again\n";
        }
    }while(selection != 'Q');
    
    return 0;
}

void Print_Menu(){
        cout << "\nP - Print numbers\n";
        cout << "A - Add a number\n";
        cout << "M - Display mean of the numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "Q - Quit\n";
        cout << "\nEnter your choice: ";
}

char Read_Selection(){
    char selection {};
    cin >> selection;
    
    //selection = toupper(selection);
    if(selection > 90){
        selection -= 32;
    }
    
    return selection;
}

void Print_numbers(const vector<int> &list){
    if(list.empty()){
        cout << "[] - the list is empty\n";
    }
    else{
        cout <<"[ ";
        for(auto var: list){
            cout << var <<' ';
        }
            cout <<"]\n";
    }
}

void Add_number(vector<int> &list, int &total, int &smallest, int &largest){
    int new_item {};
    cout << "Enter the integer: ";
    cin >> new_item;
    if(list.empty()){
        smallest = new_item;
        largest = new_item;
    }
    else{
        if(new_item > largest){
            largest = new_item;
        }
        else if (new_item <  smallest){
            smallest = new_item;
        }
        else{/*nothing*/}
    }
        list.push_back(new_item);
        cout << new_item << " added\n";
        total += new_item;
}

void Display_mean_of_umbers(vector<int> &list, int total){
    if(list.empty()){
        cout <<"There are no data\n";
    }
    else{
        cout << fixed << setprecision(1);
        cout << "Mean = " << ( static_cast<double>(total) / list.size() ) << endl;
    }
}